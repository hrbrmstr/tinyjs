#' Source a javascript file
#'
#' @param x path to a javascript file
#' @export
source_js <- function(x) {

  x <- path.expand(x)
  if (file.exists(x)) {
    rcpp_ctx_exec(paste0(readLines(x), sep="", collapse="\n"))
  } else {
    stop("File not found.", call.=FALSE)
  }
  invisible()
}

#' Evaluate javascript code
#'
#' @param x character vector of javascript code
#' @export
eval_js <- function(x) {
  rcpp_ctx_exec(paste0(x, sep="", collapse="\n"))
}

#' Retrive the value of a variable
#'
#' @param x javascript variable to retrieve
#' @export
js_get <- function(x) {
  jsonlite::fromJSON(rcpp_get(x), flatten=TRUE)
}
