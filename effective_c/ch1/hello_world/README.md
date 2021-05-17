# Notes on Hello World
There is very little I'm concerned about here, seeing as this is very basic introductory stuff, but it is worth noting the following:
`printf` should not be used for input from users.

`printf` is vulnerable to exploitation if user input is used for it. If we must do something like that, it should be filtered through a bunch of other protecting methods before being displayed.

