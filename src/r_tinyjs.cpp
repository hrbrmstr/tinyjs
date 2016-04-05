#include <Rcpp.h>

#include "TinyJS.h"
#include "TinyJS_Functions.h"
#include "TinyJS_MathFunctions.h"

using namespace Rcpp;

CTinyJS ctx;

//[[Rcpp::export]]
void rcpp_ctx_init(){
  registerFunctions(&ctx);
  registerMathFunctions(&ctx);
}

//[[Rcpp::export]]
void rcpp_ctx_exec(std::string buffer) {
  ctx.execute(buffer.c_str());
}

//[[Rcpp::export]]
std::string rcpp_get(std::string param) {
  CScriptVar *out = ctx.root->getParameter(param.c_str());
  std::ostringstream symbols;
  out->getJSON(symbols);
  return(symbols.str());
}
