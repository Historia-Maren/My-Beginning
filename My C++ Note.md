[TOC]
# **How to use the Markdown**
## First.The core function

待办清单	- [ ] 未完成 - [x] 已完成
引用	> 这是引用内容	
分割线	--- (三个减号)	
链接	[点我跳转](链接)	
图片	![图片描述](图片路径)	
行内代码	\`int a = 1;\`
代码块	三个反引号 ``` + 回车 | 带有语法高亮的代码区块 |	
表格	用 | 分隔单元格，- 分隔表头	生成美观的表格
| 姓名 | 年龄  | 城市 |
| :--- | :---: | ---: |
| 张三 |  20   | 北京 |
| 李四 |  21   | 上海 |


Ctrl + Shift + V	打开/关闭 Markdown 预览（最常用！）
Ctrl + K 然后 V	在右侧分屏打开预览（左边写，右边看）
Ctrl + B	把选中文字加粗
Ctrl + I	把选中文字变斜体
Ctrl + Shift + ]	提升标题级别（如从 ## 变 #）
Ctrl + Shift + [	降低标题级别
Ctrl + Shift + P	打开命令面板（万能的，可以搜所有功能）
Ctrl + Shift + P 然后搜 Markdown	调出插件提供的所有命令（如生成目录、导出HTML等）
Alt + Shift + F	一键格式化文档（自动帮你整理缩进、间距，让代码整齐）
Ctrl + B	加粗（和原生一样，但它会智能处理光标位置）
Ctrl + I	斜体
Alt + C	勾选/取消勾选待办清单（光标在 - [ ] 上时按，一键打勾）
Alt + S	添加删除线
自动列表	在列表里按 Enter 自动续写下一个 - 或 1.
自动生成目录	在文件开头输入 \[TOC] 然后回车，自动生成带链接的全文目录

## Second.Enhance
1.插入数学公式：
用\$包裹行内公式，用\$\$包裹独立公式。
例：$E=mc^2$ 会显示为 E=mc²
$$
\int_{a}^{b} f(x) dx
$$
会显示为一段居中的积分公式

2.流程图 / 时序图：
在代码块里用 mermaid 语言，可以画流程图：

graph TD
A[开始] --> B{判断}
B -- 是 --> C[执行]
B -- 否 --> D[结束]

3.图片粘贴：
直接截图（如 Win + Shift + S），然后在 VS Code 的 .md 文件里按 Ctrl + V，VS Code 会自动帮你保存图片到本地并插入正确的 Markdown 语法。

4.导出为 PDF / HTML：
按 Ctrl + Shift + P，搜索 Markdown: Export，可以选择把笔记导出为 PDF 或 HTML 文件。


# **My cpp note**
## Basic Grammar
| 语法命令              | 含义与作用                                                        |
| --------------------- | ----------------------------------------------------------------- |
| \#include \<iostream> | 引入输入输出流库。必须写，否则不能用 cin 和 cout。                |
| \#include \<iomanip>  | 引入格式化输出库。想用 setprecision 保留小数时必须写。            |
| using namespace std;  | 使用标准命名空间。写了这句，后面就不用写 std::cout，直接写 cout。 |
| int main() { ... }    | 主函数。程序的唯一入口，操作系统从这里开始执行。                  |
| cout << 内容;         | 输出（Console Output）。把内容打印到屏幕上。                      |
| cin >> 变量;          | 输入（Console Input）。从键盘读取数据存入变量。                   |
| endl                  | 换行（End Line）。相当于按回车键。                                |
| return 0;             | 程序正常结束。告诉操作系统程序成功执行完毕。                      |