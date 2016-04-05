<!-- README.md is generated from README.Rmd. Please edit that file -->
`tinyjs` - R pkg wrapper to <https://github.com/gfwilliams/tiny-js>

The following functions are implemented:

-   `init`
-   `exec`
-   `get`

The following data sets are included:

### News

-   Version 0.1.0.9000 released

### Installation

``` r
devtools::install_github("brudis-r7/tinyjs")
```

### Usage

``` r
library(tinyjs)
#> 
#> Attaching package: 'tinyjs'
#> 
#> The following object is masked from 'package:base':
#> 
#>     get

# current verison
packageVersion("tinyjs")
#> [1] '0.1.0.9000'

library(tinyjs)

init()

exec("var a=10;")
get("a")
#> [1] "10"

exec("var b={this:'that', or:4, the:['ot', 'he', 'r']};")
get("b")
#> [1] "{ \n  \"this\" : \"that\",\n  \"or\" : 4,\n  \"the\" : [\n\"ot\",\n\"he\",\n\"r\"\n  ]\n}"
```

### Test Results

``` r
library(tinyjs)
library(testthat)

date()
#> [1] "Tue Apr  5 10:56:35 2016"

test_dir("tests/")
#> testthat results ========================================================================================================
#> OK: 0 SKIPPED: 0 FAILED: 0
```

### Code of Conduct

Please note that this project is released with a [Contributor Code of Conduct](CONDUCT.md). By participating in this project you agree to abide by its terms.
