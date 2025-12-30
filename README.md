# FastPlanner: 2D Trajectory Optimization (Pure C++)

[![C++](https://img.shields.io/badge/Language-C++-blue.svg)](https://isocpp.org/)
[![Build](https://img.shields.io/badge/Build-CMake-brightgreen.svg)](https://cmake.org/)

## 📖 项目简介

本项目将 **FastPlanner** 后端基于 B 样条（B-Spline）的轨迹优化核心算法进行了剥离与封装，移除了复杂的 ROS 依赖，提供了一个**纯净可用的 C++ 版本**。

针对**地面移动机器人**应用场景，我们将原有的三维轨迹规划算法**降维适配为二维平面**，适用于实时的局部路径规划任务。

---

## ⚙️ 依赖安装

本项目依赖 **NLopt** 非线性优化库。

`files` 目录下已附带 `nlopt` 源码包，请先按照以下步骤编译并安装：

```bash
cd files/nlopt-2.7.1  # 假设解压后的目录名
mkdir build && cd build
cmake ..
make
sudo make install
```

---

## 🚀 编译与运行 (How to use)

```bash
# 1. 创建构建目录
mkdir build 
cd build

# 2. 编译项目
cmake ..
make

# 3. 运行示例
./main
```

---

## 🖼️ 运行效果 (Result)

<p align="center">
  <!-- 使用 raw 链接或相对路径以确保图片正常显示 -->
  <img src="https://github.com/JackJu-HIT/FastPlanner/raw/master/files/sim.png" alt="Simulation Result" width="600" />
</p>

---

## 🔗 参考项目

本项目核心算法源自以下优秀的开源项目：

*   **Teach-Repeat-Replan**: [HKUST-Aerial-Robotics/Teach-Repeat-Replan](https://github.com/HKUST-Aerial-Robotics/Teach-Repeat-Replan.git)

---

## 📚 教程与原理

关于算法原理、代码使用方法及视频教程，请参考我们的详细文档：

*   **微信公众号**：`机器人规划与控制研究所`
*   **深度解析文章**：[点击阅读详细教程](https://mp.weixin.qq.com/s/MbejVFcktayv-7KA-hpANg)

---
*Maintained by JackJu-HIT*
2.  **图片链接**：将 `blob/master` 修改为 `raw/master`，这是在 GitHub README 中显示图片的标准做法。
3.  **文章链接**：您原文中 `[显示文本](跳转链接)` 里的两个链接不一致。
    *   显示的是：`...AVFHA`
    *   跳转的是：`...hpANg`
    *   通常 Markdown 会跳转到括号里的链接。我在润色版中使用了括号里的链接（`...hpANg`），请确认这是您想要跳转的正确地址。
