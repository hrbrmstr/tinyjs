.onUnload <- function (libpath) {
  library.dynam.unload("tinyjs", libpath)
}

.pkgenv <- new.env(parent=emptyenv())

.onAttach <- function(...) {

  ctx <- rcpp_ctx_init()
  assign("ctx", ctx, envir=.pkgenv)

}
