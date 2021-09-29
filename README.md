# 2021嵌入式芯片与系统设计竞赛 1930 羊村护卫队
# Obstacle-on-Blind-Sidewalks-Dataset-and-Model-by-Tensorflow-2.3
---
这是一个在嵌入式微处理器上部署深度学习模型的开源项目。该项目建立了盲人出行环境障碍物识别的数据集，并在TensorFlow中训练了简化的MoblieNet模型。最后，将模型的二进制文件部署在UNCLEO- STM32H7A3ZIT-Q开发板上，使用STM32CubeMX和Keil5工具链编写软件功能实现了盲人出行环境的障碍物检测功能。
---
This is an open source project on the deployment of deep learning to embedded microprocessors. The project establishes a data set for obstacle recognition of blind travel environment, and trains a simplified MoblieNet model in TensorFlow. Finally, the binary file of the model is deployed on the UNCLEO-STM32H7A3ZIT-Q development board to realize the function of obstacle detection of blind travel environment.

---
在开始本项目前，需要的开发环境
---
## required
Tensorflow 2.3.0 

See the [TensorFlow install guide](https://www.tensorflow.org/install) for the
[pip package](https://www.tensorflow.org/install/pip), to
[enable GPU support](https://www.tensorflow.org/install/gpu), use a
[Docker container](https://www.tensorflow.org/install/docker), and
[build from source](https://www.tensorflow.org/install/source).

To install the current release, which includes support for
[CUDA-enabled GPU cards](https://www.tensorflow.org/install/gpu) *(Ubuntu and
Windows)*:

---
可以使用以下代码下载tensorflow2.3.0，或者使用更强大的anaconda工具包，可以从这里下载 [清华源镜像站anaconda](https://mirrors.tuna.tsinghua.edu.cn/anaconda/pkgs/main/),安装说明看这里[anaconda3安装步骤](https://zhuanlan.zhihu.com/p/75717350)
---
```
$ pip install tensorflow==2.3.0
```

Keil 5.32  see the [ mdk5](https://www2.keil.com/mdk5)

STM32 CubeMX 6.3.0 see the [ st_cubeMX](https://www.st.com/zh/development-tools/stm32cubemx.html)

X-CUBE-AI 7.0.0  

STM32Cube_FW_H7_V1.9.0 

MobileNet_V2 see the [tensorflow_mobilenet_mobilenetV2_mobilenetV3](https://github.com/tensorflow/models/tree/master/research/slim/nets/mobilenet)


## License
[Apache License 2.0](LICENSE)
