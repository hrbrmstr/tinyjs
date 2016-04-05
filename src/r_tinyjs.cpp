#include <Rcpp.h>

#include "TinyJS.h"
#include "TinyJS_Functions.h"
#include "TinyJS_MathFunctions.h"

using namespace Rcpp;

CTinyJS s;

//' @export
//[[Rcpp::export]]
void init(){
  registerFunctions(&s);
  registerMathFunctions(&s);
}

//' @export
//[[Rcpp::export]]
void exec(std::string buffer) {
  s.execute(buffer.c_str());
}

//' @export
//[[Rcpp::export]]
std::string get(std::string param) {
  CScriptVar *out = s.root->getParameter(param.c_str());
  std::ostringstream symbols;
  out->getJSON(symbols);
  return(symbols.str());
}
