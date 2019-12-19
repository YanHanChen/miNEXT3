// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// timesTwo
NumericVector timesTwo(NumericVector x);
RcppExport SEXP _miNEXT3_timesTwo(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(timesTwo(x));
    return rcpp_result_gen;
END_RCPP
}
// fk_3
double fk_3(int k1, int k2, int k3, int m1, int m2, int m3, NumericVector x1, NumericVector y1, NumericVector z1);
RcppExport SEXP _miNEXT3_fk_3(SEXP k1SEXP, SEXP k2SEXP, SEXP k3SEXP, SEXP m1SEXP, SEXP m2SEXP, SEXP m3SEXP, SEXP x1SEXP, SEXP y1SEXP, SEXP z1SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type k1(k1SEXP);
    Rcpp::traits::input_parameter< int >::type k2(k2SEXP);
    Rcpp::traits::input_parameter< int >::type k3(k3SEXP);
    Rcpp::traits::input_parameter< int >::type m1(m1SEXP);
    Rcpp::traits::input_parameter< int >::type m2(m2SEXP);
    Rcpp::traits::input_parameter< int >::type m3(m3SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type x1(x1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y1(y1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type z1(z1SEXP);
    rcpp_result_gen = Rcpp::wrap(fk_3(k1, k2, k3, m1, m2, m3, x1, y1, z1));
    return rcpp_result_gen;
END_RCPP
}
// fk
double fk(int k1, int k2, int k3, int m1, int m2, int m3, NumericVector x1, NumericVector y1, NumericVector z1);
RcppExport SEXP _miNEXT3_fk(SEXP k1SEXP, SEXP k2SEXP, SEXP k3SEXP, SEXP m1SEXP, SEXP m2SEXP, SEXP m3SEXP, SEXP x1SEXP, SEXP y1SEXP, SEXP z1SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type k1(k1SEXP);
    Rcpp::traits::input_parameter< int >::type k2(k2SEXP);
    Rcpp::traits::input_parameter< int >::type k3(k3SEXP);
    Rcpp::traits::input_parameter< int >::type m1(m1SEXP);
    Rcpp::traits::input_parameter< int >::type m2(m2SEXP);
    Rcpp::traits::input_parameter< int >::type m3(m3SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type x1(x1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y1(y1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type z1(z1SEXP);
    rcpp_result_gen = Rcpp::wrap(fk(k1, k2, k3, m1, m2, m3, x1, y1, z1));
    return rcpp_result_gen;
END_RCPP
}
// D_share
double D_share(NumericVector xi, NumericVector yi, NumericVector zi, double m1, double m2, double m3, double q);
RcppExport SEXP _miNEXT3_D_share(SEXP xiSEXP, SEXP yiSEXP, SEXP ziSEXP, SEXP m1SEXP, SEXP m2SEXP, SEXP m3SEXP, SEXP qSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type xi(xiSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type yi(yiSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type zi(ziSEXP);
    Rcpp::traits::input_parameter< double >::type m1(m1SEXP);
    Rcpp::traits::input_parameter< double >::type m2(m2SEXP);
    Rcpp::traits::input_parameter< double >::type m3(m3SEXP);
    Rcpp::traits::input_parameter< double >::type q(qSEXP);
    rcpp_result_gen = Rcpp::wrap(D_share(xi, yi, zi, m1, m2, m3, q));
    return rcpp_result_gen;
END_RCPP
}
// D_share_yhc
NumericVector D_share_yhc(NumericVector xi, NumericVector yi, NumericVector zi, double m1, double m2, double m3, NumericVector q);
RcppExport SEXP _miNEXT3_D_share_yhc(SEXP xiSEXP, SEXP yiSEXP, SEXP ziSEXP, SEXP m1SEXP, SEXP m2SEXP, SEXP m3SEXP, SEXP qSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type xi(xiSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type yi(yiSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type zi(ziSEXP);
    Rcpp::traits::input_parameter< double >::type m1(m1SEXP);
    Rcpp::traits::input_parameter< double >::type m2(m2SEXP);
    Rcpp::traits::input_parameter< double >::type m3(m3SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type q(qSEXP);
    rcpp_result_gen = Rcpp::wrap(D_share_yhc(xi, yi, zi, m1, m2, m3, q));
    return rcpp_result_gen;
END_RCPP
}
// D0_rare_yhc
double D0_rare_yhc(NumericVector xi, NumericVector yi, NumericVector zi, double m1, double m2, double m3);
RcppExport SEXP _miNEXT3_D0_rare_yhc(SEXP xiSEXP, SEXP yiSEXP, SEXP ziSEXP, SEXP m1SEXP, SEXP m2SEXP, SEXP m3SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type xi(xiSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type yi(yiSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type zi(ziSEXP);
    Rcpp::traits::input_parameter< double >::type m1(m1SEXP);
    Rcpp::traits::input_parameter< double >::type m2(m2SEXP);
    Rcpp::traits::input_parameter< double >::type m3(m3SEXP);
    rcpp_result_gen = Rcpp::wrap(D0_rare_yhc(xi, yi, zi, m1, m2, m3));
    return rcpp_result_gen;
END_RCPP
}
// D_q0_in_3
double D_q0_in_3(NumericVector xi, NumericVector yi, NumericVector zi, double m1, double m2, double m3);
RcppExport SEXP _miNEXT3_D_q0_in_3(SEXP xiSEXP, SEXP yiSEXP, SEXP ziSEXP, SEXP m1SEXP, SEXP m2SEXP, SEXP m3SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type xi(xiSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type yi(yiSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type zi(ziSEXP);
    Rcpp::traits::input_parameter< double >::type m1(m1SEXP);
    Rcpp::traits::input_parameter< double >::type m2(m2SEXP);
    Rcpp::traits::input_parameter< double >::type m3(m3SEXP);
    rcpp_result_gen = Rcpp::wrap(D_q0_in_3(xi, yi, zi, m1, m2, m3));
    return rcpp_result_gen;
END_RCPP
}
// q2_p_cpp
double q2_p_cpp(NumericVector x1, NumericVector y1, NumericVector z1, double m1, double m2, double m3, double n1, double n2, double n3);
RcppExport SEXP _miNEXT3_q2_p_cpp(SEXP x1SEXP, SEXP y1SEXP, SEXP z1SEXP, SEXP m1SEXP, SEXP m2SEXP, SEXP m3SEXP, SEXP n1SEXP, SEXP n2SEXP, SEXP n3SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x1(x1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y1(y1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type z1(z1SEXP);
    Rcpp::traits::input_parameter< double >::type m1(m1SEXP);
    Rcpp::traits::input_parameter< double >::type m2(m2SEXP);
    Rcpp::traits::input_parameter< double >::type m3(m3SEXP);
    Rcpp::traits::input_parameter< double >::type n1(n1SEXP);
    Rcpp::traits::input_parameter< double >::type n2(n2SEXP);
    Rcpp::traits::input_parameter< double >::type n3(n3SEXP);
    rcpp_result_gen = Rcpp::wrap(q2_p_cpp(x1, y1, z1, m1, m2, m3, n1, n2, n3));
    return rcpp_result_gen;
END_RCPP
}
// D_q01_in_3
double D_q01_in_3(NumericVector xi, NumericVector yi, NumericVector zi, double m1, double m2, double m3, double q);
RcppExport SEXP _miNEXT3_D_q01_in_3(SEXP xiSEXP, SEXP yiSEXP, SEXP ziSEXP, SEXP m1SEXP, SEXP m2SEXP, SEXP m3SEXP, SEXP qSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type xi(xiSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type yi(yiSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type zi(ziSEXP);
    Rcpp::traits::input_parameter< double >::type m1(m1SEXP);
    Rcpp::traits::input_parameter< double >::type m2(m2SEXP);
    Rcpp::traits::input_parameter< double >::type m3(m3SEXP);
    Rcpp::traits::input_parameter< double >::type q(qSEXP);
    rcpp_result_gen = Rcpp::wrap(D_q01_in_3(xi, yi, zi, m1, m2, m3, q));
    return rcpp_result_gen;
END_RCPP
}
// h0_3_1hat_cpp
double h0_3_1hat_cpp(NumericVector pi1, NumericVector pi2, NumericVector pi3, int m1, int m2, int m3s, int n1, int n2, int n3);
RcppExport SEXP _miNEXT3_h0_3_1hat_cpp(SEXP pi1SEXP, SEXP pi2SEXP, SEXP pi3SEXP, SEXP m1SEXP, SEXP m2SEXP, SEXP m3sSEXP, SEXP n1SEXP, SEXP n2SEXP, SEXP n3SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type pi1(pi1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type pi2(pi2SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type pi3(pi3SEXP);
    Rcpp::traits::input_parameter< int >::type m1(m1SEXP);
    Rcpp::traits::input_parameter< int >::type m2(m2SEXP);
    Rcpp::traits::input_parameter< int >::type m3s(m3sSEXP);
    Rcpp::traits::input_parameter< int >::type n1(n1SEXP);
    Rcpp::traits::input_parameter< int >::type n2(n2SEXP);
    Rcpp::traits::input_parameter< int >::type n3(n3SEXP);
    rcpp_result_gen = Rcpp::wrap(h0_3_1hat_cpp(pi1, pi2, pi3, m1, m2, m3s, n1, n2, n3));
    return rcpp_result_gen;
END_RCPP
}
// h0_3_2hat_cpp
double h0_3_2hat_cpp(NumericVector pi1, NumericVector pi2, NumericVector pi3, int m1, int m2s, int m3s, int n1, int n2, int n3);
RcppExport SEXP _miNEXT3_h0_3_2hat_cpp(SEXP pi1SEXP, SEXP pi2SEXP, SEXP pi3SEXP, SEXP m1SEXP, SEXP m2sSEXP, SEXP m3sSEXP, SEXP n1SEXP, SEXP n2SEXP, SEXP n3SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type pi1(pi1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type pi2(pi2SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type pi3(pi3SEXP);
    Rcpp::traits::input_parameter< int >::type m1(m1SEXP);
    Rcpp::traits::input_parameter< int >::type m2s(m2sSEXP);
    Rcpp::traits::input_parameter< int >::type m3s(m3sSEXP);
    Rcpp::traits::input_parameter< int >::type n1(n1SEXP);
    Rcpp::traits::input_parameter< int >::type n2(n2SEXP);
    Rcpp::traits::input_parameter< int >::type n3(n3SEXP);
    rcpp_result_gen = Rcpp::wrap(h0_3_2hat_cpp(pi1, pi2, pi3, m1, m2s, m3s, n1, n2, n3));
    return rcpp_result_gen;
END_RCPP
}
// Efk_q1_3
double Efk_q1_3(double pi1, double pi2, double pi3, int m1, int m2, int m3, int k1, int k2, int k3);
RcppExport SEXP _miNEXT3_Efk_q1_3(SEXP pi1SEXP, SEXP pi2SEXP, SEXP pi3SEXP, SEXP m1SEXP, SEXP m2SEXP, SEXP m3SEXP, SEXP k1SEXP, SEXP k2SEXP, SEXP k3SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type pi1(pi1SEXP);
    Rcpp::traits::input_parameter< double >::type pi2(pi2SEXP);
    Rcpp::traits::input_parameter< double >::type pi3(pi3SEXP);
    Rcpp::traits::input_parameter< int >::type m1(m1SEXP);
    Rcpp::traits::input_parameter< int >::type m2(m2SEXP);
    Rcpp::traits::input_parameter< int >::type m3(m3SEXP);
    Rcpp::traits::input_parameter< int >::type k1(k1SEXP);
    Rcpp::traits::input_parameter< int >::type k2(k2SEXP);
    Rcpp::traits::input_parameter< int >::type k3(k3SEXP);
    rcpp_result_gen = Rcpp::wrap(Efk_q1_3(pi1, pi2, pi3, m1, m2, m3, k1, k2, k3));
    return rcpp_result_gen;
END_RCPP
}
// h1_3_1cpp
double h1_3_1cpp(double pi1, double pi2, double pi3, int m1, int m2, int m3, int n1, int n2, int n3);
RcppExport SEXP _miNEXT3_h1_3_1cpp(SEXP pi1SEXP, SEXP pi2SEXP, SEXP pi3SEXP, SEXP m1SEXP, SEXP m2SEXP, SEXP m3SEXP, SEXP n1SEXP, SEXP n2SEXP, SEXP n3SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type pi1(pi1SEXP);
    Rcpp::traits::input_parameter< double >::type pi2(pi2SEXP);
    Rcpp::traits::input_parameter< double >::type pi3(pi3SEXP);
    Rcpp::traits::input_parameter< int >::type m1(m1SEXP);
    Rcpp::traits::input_parameter< int >::type m2(m2SEXP);
    Rcpp::traits::input_parameter< int >::type m3(m3SEXP);
    Rcpp::traits::input_parameter< int >::type n1(n1SEXP);
    Rcpp::traits::input_parameter< int >::type n2(n2SEXP);
    Rcpp::traits::input_parameter< int >::type n3(n3SEXP);
    rcpp_result_gen = Rcpp::wrap(h1_3_1cpp(pi1, pi2, pi3, m1, m2, m3, n1, n2, n3));
    return rcpp_result_gen;
END_RCPP
}
// h1_3_2cpp
double h1_3_2cpp(double pi1, double pi2, double pi3, int m1, int m2, int m3, int n1, int n2, int n3);
RcppExport SEXP _miNEXT3_h1_3_2cpp(SEXP pi1SEXP, SEXP pi2SEXP, SEXP pi3SEXP, SEXP m1SEXP, SEXP m2SEXP, SEXP m3SEXP, SEXP n1SEXP, SEXP n2SEXP, SEXP n3SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type pi1(pi1SEXP);
    Rcpp::traits::input_parameter< double >::type pi2(pi2SEXP);
    Rcpp::traits::input_parameter< double >::type pi3(pi3SEXP);
    Rcpp::traits::input_parameter< int >::type m1(m1SEXP);
    Rcpp::traits::input_parameter< int >::type m2(m2SEXP);
    Rcpp::traits::input_parameter< int >::type m3(m3SEXP);
    Rcpp::traits::input_parameter< int >::type n1(n1SEXP);
    Rcpp::traits::input_parameter< int >::type n2(n2SEXP);
    Rcpp::traits::input_parameter< int >::type n3(n3SEXP);
    rcpp_result_gen = Rcpp::wrap(h1_3_2cpp(pi1, pi2, pi3, m1, m2, m3, n1, n2, n3));
    return rcpp_result_gen;
END_RCPP
}
// h1_3_1hat_cpp
double h1_3_1hat_cpp(NumericVector pi1, NumericVector pi2, NumericVector pi3, int m1, int m2, int m3, int n1, int n2, int n3);
RcppExport SEXP _miNEXT3_h1_3_1hat_cpp(SEXP pi1SEXP, SEXP pi2SEXP, SEXP pi3SEXP, SEXP m1SEXP, SEXP m2SEXP, SEXP m3SEXP, SEXP n1SEXP, SEXP n2SEXP, SEXP n3SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type pi1(pi1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type pi2(pi2SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type pi3(pi3SEXP);
    Rcpp::traits::input_parameter< int >::type m1(m1SEXP);
    Rcpp::traits::input_parameter< int >::type m2(m2SEXP);
    Rcpp::traits::input_parameter< int >::type m3(m3SEXP);
    Rcpp::traits::input_parameter< int >::type n1(n1SEXP);
    Rcpp::traits::input_parameter< int >::type n2(n2SEXP);
    Rcpp::traits::input_parameter< int >::type n3(n3SEXP);
    rcpp_result_gen = Rcpp::wrap(h1_3_1hat_cpp(pi1, pi2, pi3, m1, m2, m3, n1, n2, n3));
    return rcpp_result_gen;
END_RCPP
}
// h1_3_2hat_cpp
double h1_3_2hat_cpp(NumericVector pi1, NumericVector pi2, NumericVector pi3, int m1, int m2, int m3, int n1, int n2, int n3);
RcppExport SEXP _miNEXT3_h1_3_2hat_cpp(SEXP pi1SEXP, SEXP pi2SEXP, SEXP pi3SEXP, SEXP m1SEXP, SEXP m2SEXP, SEXP m3SEXP, SEXP n1SEXP, SEXP n2SEXP, SEXP n3SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type pi1(pi1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type pi2(pi2SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type pi3(pi3SEXP);
    Rcpp::traits::input_parameter< int >::type m1(m1SEXP);
    Rcpp::traits::input_parameter< int >::type m2(m2SEXP);
    Rcpp::traits::input_parameter< int >::type m3(m3SEXP);
    Rcpp::traits::input_parameter< int >::type n1(n1SEXP);
    Rcpp::traits::input_parameter< int >::type n2(n2SEXP);
    Rcpp::traits::input_parameter< int >::type n3(n3SEXP);
    rcpp_result_gen = Rcpp::wrap(h1_3_2hat_cpp(pi1, pi2, pi3, m1, m2, m3, n1, n2, n3));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_hello_world
List rcpp_hello_world();
RcppExport SEXP _miNEXT3_rcpp_hello_world() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_hello_world());
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_miNEXT3_timesTwo", (DL_FUNC) &_miNEXT3_timesTwo, 1},
    {"_miNEXT3_fk_3", (DL_FUNC) &_miNEXT3_fk_3, 9},
    {"_miNEXT3_fk", (DL_FUNC) &_miNEXT3_fk, 9},
    {"_miNEXT3_D_share", (DL_FUNC) &_miNEXT3_D_share, 7},
    {"_miNEXT3_D_share_yhc", (DL_FUNC) &_miNEXT3_D_share_yhc, 7},
    {"_miNEXT3_D0_rare_yhc", (DL_FUNC) &_miNEXT3_D0_rare_yhc, 6},
    {"_miNEXT3_D_q0_in_3", (DL_FUNC) &_miNEXT3_D_q0_in_3, 6},
    {"_miNEXT3_q2_p_cpp", (DL_FUNC) &_miNEXT3_q2_p_cpp, 9},
    {"_miNEXT3_D_q01_in_3", (DL_FUNC) &_miNEXT3_D_q01_in_3, 7},
    {"_miNEXT3_h0_3_1hat_cpp", (DL_FUNC) &_miNEXT3_h0_3_1hat_cpp, 9},
    {"_miNEXT3_h0_3_2hat_cpp", (DL_FUNC) &_miNEXT3_h0_3_2hat_cpp, 9},
    {"_miNEXT3_Efk_q1_3", (DL_FUNC) &_miNEXT3_Efk_q1_3, 9},
    {"_miNEXT3_h1_3_1cpp", (DL_FUNC) &_miNEXT3_h1_3_1cpp, 9},
    {"_miNEXT3_h1_3_2cpp", (DL_FUNC) &_miNEXT3_h1_3_2cpp, 9},
    {"_miNEXT3_h1_3_1hat_cpp", (DL_FUNC) &_miNEXT3_h1_3_1hat_cpp, 9},
    {"_miNEXT3_h1_3_2hat_cpp", (DL_FUNC) &_miNEXT3_h1_3_2hat_cpp, 9},
    {"_miNEXT3_rcpp_hello_world", (DL_FUNC) &_miNEXT3_rcpp_hello_world, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_miNEXT3(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}