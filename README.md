# README

[TOC]

## Hello doxygen !

This project is a template project to demonstrate an intuitive and modern way to enjoy doxygen. Doxygen is an time-honored tool for generating references from comments in codes. However, using it without any configuration probably results in unsatisfied outcome. Although the official online-document helps a lot, it is too brief and too simple to prepare doxygen ready for production.

Too make life easier, I make this template project. It is expected to be:

* support multiple sub-projects: each folder under the project root folder is considered a sub-project, or a module of the project. Doxygen is configured to scan recursively and generate thorough document.

* support math rendering: with minimal configuration, we can render the math expression using our familiar syntax. Inline equations are surrounded by `$` and block equations are surrounded by `$$`.

* encourage markdown document: comments from code files are informative, but they are API *reference* rather than *guide*. A fresh user expects to read guides that introduces and shows the outline of the project, teaches the user examples with baby-understandable explanation. So markdown documents besides the comments are encouraged as markdown is easy to edit and read with various editor compared to raw letters in comments.

## Status

The project is under intensive development. Contents may change rapidly.


## Quick Start

* write a welcome page:
    * This file, which you are reading now. [README.md](README.md)

* markdown examples: 
    * The welcome page. [README.md](README.md)
    * Markdown syntax testing. [markdown-test](use-markdown/markdown-test.md)
    * Links in markdown. [link-test](basic-usage/link-test.md)
    * Official guide: [automatic link generation](https://www.doxygen.nl/manual/autolink.html)
    * Official references: [command-ref](https://www.doxygen.nl/manual/commands.html#cmdref)

* intra-code comments examples:
    * code files under folder `basic-usage`, such as `basic-usage/main.cpp`.


## LICENSE

MIT License

