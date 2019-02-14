# Guide

This page discribe how to add contents into the blog.

## Structure

* All pages should be placed in the folder **_docs/_** and have an unique name.
* Sources, such as images, should be placed into a subfolder with the exactly same name as the page.

## File format

* **HTML** and **Markdown** are supported.

## Guidance

* Markdown
    * [Basic writing and formatting syntax](https://help.github.com/articles/basic-writing-and-formatting-syntax/)
    * [Mastering Markdown](https://guides.github.com/features/mastering-markdown/)
* HTML
    * [W3Schools](https://www.w3schools.com/html/)

## Known issues

* Markdown
    * A link to markdown file need a # tag after the address. e.g. `index.md` to `index.md#`. Otherwise, the broswer would tend to download the markdown file instead of routing to the relevant html page.
    * The markdown file would not be rendered to html page if it is named as README.