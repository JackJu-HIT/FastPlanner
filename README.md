
# Fast-Planner (早期版本 / Legacy Version)

> [!IMPORTANT]
> **⚠️ 版本迁移提示 / Migration Notice**
> 
> *   **本项目状态**：这是 Fast-Planner 的早期开发版本，目前已停止主要维护。
> *   **最新推荐**：针对地面机器人和 ROS 2 环境，我们推出了全新的重构版本。请务必访问以下仓库获取最新代码：
>
> 👉 **[Fast-Planner-2D-ROS2 (最新 2D 原生版)](https://github.com/JackJu-HIT/Fast-Planner-2D-ROS2)**

---

### 🌟 新版特性与优势 (Key Features of the New Version)

如果您正在开发地面移动机器人，强烈建议使用新版本，它包含以下重大改进：

1.  **专为 2D 地面机器人适配**
    *   在 B 样条代价函数与 ESDF 梯度计算中，强制加入了 Z 轴方向的优化约束。这使得算法在保留原始框架强大避障平滑性能的同时，完美适配 2D 平面运动规划。

2.  **纯粹的 C++ 核心接口**
    *   完全剥离了原版复杂的 ROS 1 全局规划与地图管理逻辑，提供解耦的、纯粹的 C++ 优化接口，方便开发者轻松移植并适配到自己的项目中。

3.  **ESDF 性能深度优化**
    *   对 ESDF (欧几里得符号距离场) 代码进行了底层升级，大幅优化了构建效率和索引逻辑，计算速度更快，更适合高频的实时局部规划。

4.  **原生 ROS 2 支持**
    *   全面拥抱 ROS 2 生态 (支持 Humble/Foxy 等版本)，提供完善的可视化接口与交互媒介，利用 Rviz2 进行仿真与调试更加便捷。

---

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
