# 2021嵌入式芯片与系统设计竞赛 1930 羊村护卫队

---
这是一个在嵌入式微处理器上部署深度学习模型的开源项目。该项目建立了盲人出行环境障碍物识别的数据集，并在TensorFlow中训练了简化的MoblieNet模型。最后，将模型的二进制文件部署在UNCLEO- STM32H7A3ZIT-Q开发板上，使用STM32CubeMX和Keil5工具链编写软件功能实现了盲人出行环境的障碍物检测功能。
---

This is an open source project on the deployment of deep learning to embedded microprocessors. The project establishes a data set for obstacle recognition of blind travel environment, and trains a simplified MoblieNet model in TensorFlow. Finally, the binary file of the model is deployed on the UNCLEO-STM32H7A3ZIT-Q development board to realize the function of obstacle detection of blind travel environment.

---
在开始本项目前，需要的开发环境
---

Tensorflow 2.3.0 

---
可以使用以下代码下载tensorflow2.3.0，或者使用更强大的anaconda工具包，可以从 [清华源镜像站anaconda](https://mirrors.tuna.tsinghua.edu.cn/anaconda/pkgs/main/),安装说明看 [anaconda3安装步骤](https://zhuanlan.zhihu.com/p/75717350)
---
```
$ pip install tensorflow==2.3.0
```
---
目前ST官方也推出了自己的IDE工具包 [STM32CubeIDE](https://www.st.com/zh/development-tools/stm32cubeide.html),编译速度超级快，并且内置STM32CubeMX，支持HAL库和LL库生成代码，推荐使用。当然您也可以选择以下软件包搭配使用。
---
[Keil 5.32](https://www2.keil.com/mdk5)  -->ARM Compiler：V6.14 -->Optimization：-Oz image size

[STM32 CubeMX 6.3.0](https://www.st.com/zh/development-tools/stm32cubemx.html)

X-CUBE-AI 7.0.0  由 STM32 CubeMX 提供

STM32Cube_FW_H7_V1.9.0 由 STM32 CubeMX 提供

---
开发板
---

---
OBSC 数据集
---
 [OBSD 百度网盘](https://pan.baidu.com/s/1wkU6P3CFKcUWcLv6ivyM-Q) 提取码：5zro
---
您也可以使用Tensorflow提供的预训练权重和激活值
---
[tensorflow_model](https://github.com/tensorflow/models/tree/master/research/slim/nets)


## License
[Apache License 2.0](LICENSE)
