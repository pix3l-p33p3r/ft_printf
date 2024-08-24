<h1 align="center">
    <b>ft_printf</b>
    <br>
    <img src="https://github.com/pix3l-p33p3r/ft_printf/blob/main/ft_printfe.png" alt="ft_printf">
</h1>

<div align="center">
    <h2>
        Final Score
    </h2>
    <img src="https://github.com/pix3l-p33p3r/ft_printf/blob/main/score_100.png" alt="Final Score">
    <h4>Completed </h4>
</div>

<h2>Overview</h2>

<p>
    <code>ft_printf</code> is a custom implementation of the standard C library function <code>printf</code>. The goal of this project is to recreate <code>printf</code> with similar functionality, handling formatted output to the standard output stream.
</p>

<h2>Features</h2>

<ul>
    <li>Supports the following conversions:
        <ul>
            <li><code>%c</code>: Character</li>
            <li><code>%s</code>: String</li>
            <li><code>%p</code>: Pointer</li>
            <li><code>%d</code> / <code>%i</code>: Signed decimal integer</li>
            <li><code>%u</code>: Unsigned decimal integer</li>
            <li><code>%x</code> / <code>%X</code>: Unsigned hexadecimal integer (lowercase/uppercase)</li>
            <li><code>%%</code>: Percent sign</li>
        </ul>
    </li>
    <li>Handles the following flags:
        <ul>
            <li><code>-</code>: Left justify</li>
            <li><code>0</code>: Zero-padding</li>
            <li><code>.precision</code>: Precision for strings and integers</li>
            <li>Field width specification</li>
        </ul>
    </li>
</ul>

<h2>Installation</h2>

<p>To use <code>ft_printf</code>, you can clone the repository and compile the source code as follows:</p>

<pre><code>git clone https://github.com/pix3l-p33p3r/ft_printf.git
cd ft_printf
make
</code></pre>

<p>This will generate a <code>libftprintf.a</code> static library that you can link with your projects.</p>

<h2>Usage</h2>

<p>To use <code>ft_printf</code> in your C programs, include the header and link the library during compilation:</p>

<pre><code>#include "ft_printf.h"
</code></pre>

<p>Compile your program with <code>ft_printf</code>:</p>

<pre><code>gcc -Wall -Wextra -Werror -L. -lftprintf your_program.c -o your_program
</code></pre>

<h3>Example</h3>

<p>Here’s a quick example of how you can use <code>ft_printf</code>:</p>

<pre><code>#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello, %s!\n", "world");
    ft_printf("Number: %d\n", 42);
    ft_printf("Hex: %#x\n", 255);
    return 0;
}
</code></pre>

<h3>Output</h3>

<pre><code>Hello, world!
Number: 42
Hex: 0xff
</code></pre>

<h2>Testing</h2>

<p>To run tests and verify the implementation, you can compile the <code>main.c</code> file provided with test cases:</p>

<pre><code>gcc -Wall -Wextra -Werror -L. -lftprintf main.c -o test_ftprintf
./test_ftprintf
</code></pre>

<h2>Project Structure</h2>

<ul>
    <li><code>ft_printf.h</code>: Header file containing function prototypes and macros.</li>
    <li><code>ft_printf.c</code>: The main <code>ft_printf</code> function implementation.</li>
    <li><code>parsing.c</code>: Functions for parsing format specifiers.</li>
    <li><code>utils.c</code>: Utility functions used by <code>ft_printf</code>.</li>
    <li><code>Makefile</code>: Makefile to build the library.</li>
</ul>
