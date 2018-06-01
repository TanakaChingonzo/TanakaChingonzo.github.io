<p align="center">
    <h2 align="center">Tanaka Chingonzo Jekyll <a href="http://tanaka.co.zw/">Site</a></h2>
</p>

Based on the [Violet theme](https://github.com/sergiokopplin/violet/) by @sergiokopplin.

Inspiration</strong>: <a href="http://cyberglot.me">Ju Gonçalves</a>

***

<p align="center">
    <b><a href="README.md#what-has-inside">What is inside?</a></b>
    |
    <b><a href="README.md#setup">Setup?</a></b>
    |
    <b><a href="README.md#settings">Settings</a></b>
    |
    <b><a href="README.md#tests">Tests</a></b>
    |
    <b><a href="README.md#donate">Donate</a></b>
    |
    <b><a href="README.md#problems">Problems</a></b>
</p>

<p align="center">
    <img src="" />
</p>

## What is inside?

- [Jekyll](https://jekyllrb.com/) and [Sass](http://sass-lang.com/)
- Tests with [Travis](https://travis-ci.org/)
- No JS. :sunglasses:

## Setup

0. :star: to the project. :metal:
1. [Install Jekyll](http://jekyllrb.com), [NodeJS](https://nodejs.org/) and [Bundler](http://bundler.io/).
2. Fork the project [Tanaka Chingonzo](https://github.com/tanakachingonzo/tanakachingonzo.github.io.git)
3. Edit `_config.yml` with your data.
4. `bundle install`
5. `bundle exec jekyll serve`
6. open in your browser: `http://localhost:4000`

## Settings

You must fill some informations on `_config.yml` to customize your site.

```
name: Jane Doe
bio: 'A Girl who travels the world eating noodles'
...

and lot of other options.
```

## Tests

You can test your app with:

```bash
bundle exec htmlproofer ./_site
````
