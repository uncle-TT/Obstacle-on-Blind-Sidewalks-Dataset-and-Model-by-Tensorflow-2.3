# Obstacle-on-Blind-Sidewalks-Dataset-and-Model-by-Tensorflow-2.3
This is an open source project on the deployment of deep learning to embedded microprocessors. The project establishes a data set for obstacle recognition of blind travel environment, and trains a simplified MoblieNet model in TensorFlow. Finally, the binary file of the model is deployed on the UNCLEO-STM32H7A3ZIT-Q development board to realize the function of obstacle detection of blind travel environment.

## required
Tensorflow 2.3.0  

Keil 5.32  see the[mdk5](https://www2.keil.com/mdk5)

STM32 CubeMX 6.3.0 see the[st_cubeMX](https://www.st.com/zh/development-tools/stm32cubemx.html)

X-CUBE-AI 7.0.0 

STM32Cube_FW_H7_V1.9.0

MobileNet_V2 see the[tensorflow_mobilenet_mobilenetV2_mobilenetV3](https://github.com/tensorflow/models/tree/master/research/slim/nets/mobilenet)

## Install

See the [TensorFlow install guide](https://www.tensorflow.org/install) for the
[pip package](https://www.tensorflow.org/install/pip), to
[enable GPU support](https://www.tensorflow.org/install/gpu), use a
[Docker container](https://www.tensorflow.org/install/docker), and
[build from source](https://www.tensorflow.org/install/source).

To install the current release, which includes support for
[CUDA-enabled GPU cards](https://www.tensorflow.org/install/gpu) *(Ubuntu and
Windows)*:

```
$ pip install tensorflow
```

A smaller CPU-only package is also available:

```
$ pip install tensorflow-cpu
```

To update TensorFlow to the latest version, add `--upgrade` flag to the above
commands.

*Nightly binaries are available for testing using the
[tf-nightly](https://pypi.python.org/pypi/tf-nightly) and
[tf-nightly-cpu](https://pypi.python.org/pypi/tf-nightly-cpu) packages on PyPi.*

#### *Try your first TensorFlow program*

```shell
$ python
```

```python
>>> import tensorflow as tf
>>> tf.add(1, 2).numpy()
3
>>> hello = tf.constant('Hello, TensorFlow!')
>>> hello.numpy()
b'Hello, TensorFlow!'
```
