// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// rcpp_ctx_init
void rcpp_ctx_init();
RcppExport SEXP tinyjs_rcpp_ctx_init() {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    rcpp_ctx_init();
    return R_NilValue;
END_RCPP
}
// rcpp_ctx_exec
void rcpp_ctx_exec(std::string buffer);
RcppExport SEXP tinyjs_rcpp_ctx_exec(SEXP bufferSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::string >::type buffer(bufferSEXP);
    rcpp_ctx_exec(buffer);
    return R_NilValue;
END_RCPP
}
// rcpp_get
std::string rcpp_get(std::string param);
RcppExport SEXP tinyjs_rcpp_get(SEXP paramSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::string >::type param(paramSEXP);
    __result = Rcpp::wrap(rcpp_get(param));
    return __result;
END_RCPP
}
