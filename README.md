# 嵌入式AI作品-智能导盲杖

---
这是一个在嵌入式微处理器上部署深度学习模型的开源项目。该项目建立了盲人出行环境障碍物识别的数据集，并在TensorFlow中训练了简化的MoblieNet模型。最后，将模型的二进制文件部署在UNCLEO- STM32H7A3ZIT-Q开发板上，使用STM32CubeMX和Keil5工具链编写软件功能实现了盲人出行环境的障碍物检测功能。
---


---
在开始本项目前，需要的开发环境
---

Tensorflow 2.3.0 

---
您可以使用以下代码下载tensorflow2.3.0，或者使用更强大的anaconda工具包，可以从 [清华源镜像站anaconda下载](https://mirrors.tuna.tsinghua.edu.cn/anaconda/pkgs/main/),安装说明看 [anaconda3安装步骤](https://zhuanlan.zhihu.com/p/75717350)
---
```
$ pip install tensorflow==2.3.0
```
---
目前ST官方也推出了自己的IDE工具包 [STM32CubeIDE](https://www.st.com/zh/development-tools/stm32cubeide.html),编译速度快，内置STM32CubeMX，支持生成HAL库和LL库代码，推荐使用。当然您也可以选择以下软件包搭配使用。
---
[Keil 5.32](https://www2.keil.com/mdk5)  -->ARM Compiler：V6.14 -->Optimization：-Oz image size

[STM32 CubeMX 6.3.0](https://www.st.com/zh/development-tools/stm32cubemx.html)

X-CUBE-AI 7.0.0  由 STM32 CubeMX 提供

STM32Cube_FW_H7_V1.9.0 由 STM32 CubeMX 提供

---
开发板
---
本项目使用了ST提供的[NUCLEO-H7A3ZI-Q](https://www.st.com/zh/evaluation-tools/nucleo-h7a3zi-q.html)开发板，板载资源丰富，主频280 MHz、2M Flash,1376KB SRAM，支持TFT-LCD、JPEG codec、Chrom-GRC™、可选的片内SMPS、双模Octo-SPI（支持实时解密功能）
本项目没有使用外部Flash和外部SRAM，所有功能都基于板载资源实现。

![image](https://github.com/uncle-TT/Obstacle-on-Blind-Sidewalks-Dataset-and-Model-by-Tensorflow-2.3/blob/main/model/nucleo_144_large.jpg)

![image](https://github.com/uncle-TT/Obstacle-on-Blind-Sidewalks-Dataset-and-Model-by-Tensorflow-2.3/blob/main/model/en.ln1847_stm32_nucleo.jpg)

---
外设模块
---
![image](https://github.com/uncle-TT/Obstacle-on-Blind-Sidewalks-Dataset-and-Model-by-Tensorflow-2.3/blob/main/model/2.png)
---
功能图
---
![image](https://github.com/uncle-TT/Obstacle-on-Blind-Sidewalks-Dataset-and-Model-by-Tensorflow-2.3/blob/main/model/1.png)
---
---
您也可以使用Tensorflow提供的预训练权重和激活值，以下内容来自[Tensorflow](https://github.com/tensorflow/models/tree/master/research/slim/nets)
---

# MobileNet
这个文件包括
[MobileNetV2](https://arxiv.org/abs/1801.04381)和
[MobilenetV3](https://arxiv.org/abs/1905.02244) 网络. 

## 预训练模型

### Mobilenet V3 Imagenet Checkpoints

所有的mobilenet V3检查点都经过图像分辨率为224x224的训练。延时都在毫秒级，除了大模型和小模型外，本文还包含了所谓的极简模型，这些模型具有与MobilenetV3相同的尺寸特性，但是它们没有使用任何高级网络块。虽然这些模型在CPU上效率较低，但在GPU / DSP上的性能要好得多。

| Imagenet Checkpoint | MACs (M) | Params (M) | Top1 | Pixel 1 | Pixel 2 | Pixel 3 |
| ------------------ | -------- | ---------- | ---- | ------- | ------- | ------- |
| [Large dm=1 (float)]    | 217      | 5.4        | 75.2 | 51.2    | 61      | 44      |
| [Large dm=1 (8-bit)]    | 217      | 5.4        | 73.9 | 44      | 42.5    | 32      |
| [Large dm=0.75 (float)] | 155      | 4.0        | 73.3 | 39.8    | 48      | 34      |
| [Small dm=1 (float)]    | 66       | 2.9        | 67.5 | 15.8    | 19.4    | 14.4    |
| [Small dm=1 (8-bit)]    | 66       | 2.9        | 64.9 | 15.5    | 15      | 10.7    |
| [Small dm=0.75 (float)] | 44       | 2.4        | 65.4 | 12.8    | 15.9    | 11.6    |

#### Minimalistic checkpoints:

| Imagenet Checkpoint | MACs (M) | Params (M) | Top1 | Pixel 1 | Pixel 2 | Pixel 3 |
| -------------- | -------- | ---------- | ---- | ------- | ------- | ------- |
| [Large minimalistic (float)]        | 209      | 3.9        | 72.3 | 44.1    | 51      | 35      |
| [Large minimalistic (8-bit)][lm8]   | 209      | 3.9        | 71.3 | 37      | 35      | 27      |
| [Small minimalistic (float)]        | 65       | 2.0        | 61.9 | 12.2    | 15.1    | 11      |

#### Edge TPU checkpoints:

| Imagenet Checkpoint | MACs (M) | Params (M) | Top1 | Pixel 4 Edge TPU | Pixel 4 CPU |
| ----------------- | -------- | ---------- | ---- | ------- | ----------- |
| [MobilenetEdgeTPU dm=0.75 (8-bit)]| 624      | 2.9        | 73.5 | 3.1     | 13.8        |
| [MobilenetEdgeTPU dm=1 (8-bit)] | 990      | 4.0        | 75.6 | 3.6     | 20.6        |


Note: 8比特量化模型通过Tensorflow Lite 
[post training quantization](https://www.tensorflow.org/lite/performance/post_training_quantization)
转换.

[Small minimalistic (float)]: https://storage.googleapis.com/mobilenet_v3/checkpoints/v3-small-minimalistic_224_1.0_float.tgz
[Large minimalistic (float)]: https://storage.googleapis.com/mobilenet_v3/checkpoints/v3-large-minimalistic_224_1.0_float.tgz
[lm8]: https://storage.googleapis.com/mobilenet_v3/checkpoints/v3-large-minimalistic_224_1.0_uint8.tgz
[Large dm=1 (float)]: https://storage.googleapis.com/mobilenet_v3/checkpoints/v3-large_224_1.0_float.tgz
[Small dm=1 (float)]: https://storage.googleapis.com/mobilenet_v3/checkpoints/v3-small_224_1.0_float.tgz
[Large dm=1 (8-bit)]: https://storage.googleapis.com/mobilenet_v3/checkpoints/v3-large_224_1.0_uint8.tgz
[Small dm=1 (8-bit)]: https://storage.googleapis.com/mobilenet_v3/checkpoints/v3-small_224_1.0_uint8.tgz
[Large dm=0.75 (float)]: https://storage.googleapis.com/mobilenet_v3/checkpoints/v3-large_224_0.75_float.tgz
[Small dm=0.75 (float)]: https://storage.googleapis.com/mobilenet_v3/checkpoints/v3-small_224_0.75_float.tgz
[MobilenetEdgeTPU dm=0.75 (8-bit)]: https://storage.cloud.google.com/mobilenet_edgetpu/checkpoints/mobilenet_edgetpu_224_0.75.tgz
[MobilenetEdgeTPU dm=1 (8-bit)]: https://storage.cloud.google.com/mobilenet_edgetpu/checkpoints/mobilenet_edgetpu_224_1.0.tgz

### Mobilenet V2 Imagenet Checkpoints

Classification Checkpoint                   | Quantized                                                               | MACs (M) | Parameters (M) | Top 1 Accuracy | Top 5 Accuracy | Mobile CPU (ms) Pixel 1
------------------------------------------------------------------------------------------------------|-------------- | -------- | -------------- | -------------- | -------------- | -----------------------
[float_v2_1.4_224](https://storage.googleapis.com/mobilenet_v2/checkpoints/mobilenet_v2_1.4_224.tgz)  | [uint8][quantized_v2_1.4_224]  | 582      | 6.06           | 75.0           | 92.5           | 138.0
[float_v2_1.3_224](https://storage.googleapis.com/mobilenet_v2/checkpoints/mobilenet_v2_1.3_224.tgz) |[uint8][quantized_v2_1.3_224]   | 509      | 5.34           | 74.4           | 92.1           | 123.0
[float_v2_1.0_224](https://storage.googleapis.com/mobilenet_v2/checkpoints/mobilenet_v2_1.0_224.tgz)  |[uint8][quantized_v2_1.0_224]  | 300      | 3.47           | 71.8           | 91.0           | 73.8
[float_v2_1.0_192](https://storage.googleapis.com/mobilenet_v2/checkpoints/mobilenet_v2_1.0_192.tgz)  |[uint8][quantized_v2_1.0_192]  | 221      | 3.47           | 70.7           | 90.1           | 55.1
[float_v2_1.0_160](https://storage.googleapis.com/mobilenet_v2/checkpoints/mobilenet_v2_1.0_160.tgz) | [uint8][quantized_v2_1.0_160]  | 154      | 3.47           | 68.8           | 89.0           | 40.2
[float_v2_1.0_128](https://storage.googleapis.com/mobilenet_v2/checkpoints/mobilenet_v2_1.0_128.tgz) |  [uint8][quantized_v2_1.0_128]  | 99       | 3.47           | 65.3           | 86.9           | 27.6
[float_v2_1.0_96](https://storage.googleapis.com/mobilenet_v2/checkpoints/mobilenet_v2_1.0_96.tgz)    | [uint8][quantized_v2_1.0_96]   | 56       | 3.47           | 60.3           | 83.2           | 17.6
[float_v2_0.75_224](https://storage.googleapis.com/mobilenet_v2/checkpoints/mobilenet_v2_0.75_224.tgz)|[uint8][quantized_v2_0.75_224] | 209      | 2.61           | 69.8           | 89.6           | 55.8
[float_v2_0.75_192](https://storage.googleapis.com/mobilenet_v2/checkpoints/mobilenet_v2_0.75_192.tgz)|[uint8][quantized_v2_0.75_192] | 153      | 2.61           | 68.7           | 88.9           | 41.6
[float_v2_0.75_160](https://storage.googleapis.com/mobilenet_v2/checkpoints/mobilenet_v2_0.75_160.tgz)| [uint8][quantized_v2_0.75_160] | 107      | 2.61           | 66.4           | 87.3           | 30.4
[float_v2_0.75_128](https://storage.googleapis.com/mobilenet_v2/checkpoints/mobilenet_v2_0.75_128.tgz)| [uint8][quantized_v2_0.75_128] | 69       | 2.61           | 63.2           | 85.3           | 21.9
[float_v2_0.75_96](https://storage.googleapis.com/mobilenet_v2/checkpoints/mobilenet_v2_0.75_96.tgz)  |[uint8][quantized_v2_0.75_96]  | 39       | 2.61           | 58.8           | 81.6           | 14.2
[float_v2_0.5_224](https://storage.googleapis.com/mobilenet_v2/checkpoints/mobilenet_v2_0.5_224.tgz)  |[uint8][quantized_v2_0.5_224] | 97       | 1.95           | 65.4           | 86.4           | 28.7
[float_v2_0.5_192](https://storage.googleapis.com/mobilenet_v2/checkpoints/mobilenet_v2_0.5_192.tgz)  |[uint8][quantized_v2_0.5_192]  | 71       | 1.95           | 63.9           | 85.4           | 21.1
[float_v2_0.5_160](https://storage.googleapis.com/mobilenet_v2/checkpoints/mobilenet_v2_0.5_160.tgz)  |[uint8][quantized_v2_0.5_160]  | 50       | 1.95           | 61.0           | 83.2           | 14.9
[float_v2_0.5_128](https://storage.googleapis.com/mobilenet_v2/checkpoints/mobilenet_v2_0.5_128.tgz)  |[uint8][quantized_v2_0.5_128]  | 32       | 1.95           | 57.7           | 80.8           | 9.9
[float_v2_0.5_96](https://storage.googleapis.com/mobilenet_v2/checkpoints/mobilenet_v2_0.5_96.tgz)    |[uint8][quantized_v2_0.5_96]   | 18       | 1.95           | 51.2           | 75.8           | 6.4
[float_v2_0.35_224](https://storage.googleapis.com/mobilenet_v2/checkpoints/mobilenet_v2_0.35_224.tgz)|[uint8][quantized_v2_0.35_224] | 59       | 1.66           | 60.3           | 82.9           | 19.7
[float_v2_0.35_192](https://storage.googleapis.com/mobilenet_v2/checkpoints/mobilenet_v2_0.35_192.tgz)| [uint8][quantized_v2_0.35_192] | 43       | 1.66           | 58.2           | 81.2           | 14.6
[float_v2_0.35_160](https://storage.googleapis.com/mobilenet_v2/checkpoints/mobilenet_v2_0.35_160.tgz)|[uint8][quantized_v2_0.35_160] | 30       | 1.66           | 55.7           | 79.1           | 10.5
[float_v2_0.35_128](https://storage.googleapis.com/mobilenet_v2/checkpoints/mobilenet_v2_0.35_128.tgz)|[uint8][quantized_v2_0.35_128] | 20       | 1.66           | 50.8           | 75.0           | 6.9
[float_v2_0.35_96](https://storage.googleapis.com/mobilenet_v2/checkpoints/mobilenet_v2_0.35_96.tgz)  |[uint8][quantized_v2_0.35_96]  | 11       | 1.66           | 45.5           | 70.4           | 4.5

[quantized_v2_1.4_224]: https://storage.googleapis.com/mobilenet_v2/checkpoints/quantized_v2_224_140.tgz
[quantized_v2_1.3_224]: https://storage.googleapis.com/mobilenet_v2/checkpoints/quantized_v2_224_130.tgz
[quantized_v2_1.0_224]: https://storage.googleapis.com/mobilenet_v2/checkpoints/quantized_v2_224_100.tgz
[quantized_v2_1.0_192]: https://storage.googleapis.com/mobilenet_v2/checkpoints/quantized_v2_192_100.tgz
[quantized_v2_1.0_160]: https://storage.googleapis.com/mobilenet_v2/checkpoints/quantized_v2_160_100.tgz
[quantized_v2_1.0_128]: https://storage.googleapis.com/mobilenet_v2/checkpoints/quantized_v2_128_100.tgz
[quantized_v2_1.0_96]: https://storage.googleapis.com/mobilenet_v2/checkpoints/quantized_v2_96_100.tgz
[quantized_v2_0.75_224]: https://storage.googleapis.com/mobilenet_v2/checkpoints/quantized_v2_224_75.tgz
[quantized_v2_0.75_192]: https://storage.googleapis.com/mobilenet_v2/checkpoints/quantized_v2_192_75.tgz
[quantized_v2_0.75_160]: https://storage.googleapis.com/mobilenet_v2/checkpoints/quantized_v2_160_75.tgz
[quantized_v2_0.75_128]: https://storage.googleapis.com/mobilenet_v2/checkpoints/quantized_v2_128_75.tgz
[quantized_v2_0.75_96]: https://storage.googleapis.com/mobilenet_v2/checkpoints/quantized_v2_96_75.tgz
[quantized_v2_0.5_224]: https://storage.googleapis.com/mobilenet_v2/checkpoints/quantized_v2_224_50.tgz
[quantized_v2_0.5_192]: https://storage.googleapis.com/mobilenet_v2/checkpoints/quantized_v2_192_50.tgz
[quantized_v2_0.5_160]: https://storage.googleapis.com/mobilenet_v2/checkpoints/quantized_v2_160_50.tgz
[quantized_v2_0.5_128]: https://storage.googleapis.com/mobilenet_v2/checkpoints/quantized_v2_128_50.tgz
[quantized_v2_0.5_96]: https://storage.googleapis.com/mobilenet_v2/checkpoints/quantized_v2_96_50.tgz
[quantized_v2_0.35_224]: https://storage.googleapis.com/mobilenet_v2/checkpoints/quantized_v2_224_35.tgz
[quantized_v2_0.35_192]: https://storage.googleapis.com/mobilenet_v2/checkpoints/quantized_v2_192_35.tgz
[quantized_v2_0.35_160]: https://storage.googleapis.com/mobilenet_v2/checkpoints/quantized_v2_160_35.tgz
[quantized_v2_0.35_128]: https://storage.googleapis.com/mobilenet_v2/checkpoints/quantized_v2_128_35.tgz
[quantized_v2_0.35_96]: https://storage.googleapis.com/mobilenet_v2/checkpoints/quantized_v2_96_35.tgz



## License
[Apache License 2.0](LICENSE)
