<!-- README.md is generated from README.Rmd. Please edit that file -->
`tinyjs` - Lightweight Embedded JavaScript Engine (a wrapper for [TinyJS](https://github.com/gfwilliams/tiny-js))

An R interface to the 'TinyJS' — <https://github.com/gfwilliams/tiny-js> — JavaScript engine; a more lightweight alternative to 'V8' with no external dependencies.

The following functions are implemented:

-   `source_js` : source a javascript file
-   `eval_js` : evaluate javascript strings
-   `js_get` : get javascript objects

The following data sets are included:

-   `system.file("js/test001.js", package="tinyjs")`
-   `system.file("js/test002.js", package="tinyjs")`
-   `system.file("js/test003.js", package="tinyjs")`
-   `system.file("js/test004.js", package="tinyjs")`
-   `system.file("js/test005.js", package="tinyjs")`
-   `system.file("js/test006.js", package="tinyjs")`
-   `system.file("js/test007.js", package="tinyjs")`

### News

-   Version 0.2.5.9000 99.9% CRAN checks & added tests + built w/`build_win()`
-   Version 0.2.0.9000 cleaner API
-   Version 0.1.0.9000 released

### Installation

``` r
devtools::install_github("hrbrmstr/tinyjs")
```

### Usage

``` r
library(tinyjs)

# current verison
packageVersion("tinyjs")
#> [1] '0.2.0.9000'

eval_js("var a=10;")
js_get("a")
#> [1] 10

eval_js("var b={this:'that', or:4, the:['ot', 'he', 'r']};")
js_get("b")
#> $this
#> [1] "that"
#> 
#> $or
#> [1] 4
#> 
#> $the
#> [1] "ot" "he" "r"

for(js_fil in sprintf("js/test00%d.js", 1:7)) {
  source_js(system.file(js_fil, package="tinyjs"))
  print(js_get("result"))
}
#> [1] 1
#> [1] 42
#> [1] 45
#> [1] 1
#> [1] 45
#> [1] 9
#> [1] 9
```

### Test Results

``` r
library(tinyjs)
library(testthat)

date()
#> [1] "Tue Apr  5 17:57:07 2016"

test_dir("tests/")
#> testthat results ========================================================================================================
#> OK: 1 SKIPPED: 0 FAILED: 0
```

### Code of Conduct

Please note that this project is released with a [Contributor Code of Conduct](CONDUCT.md). By participating in this project you agree to abide by its terms.
