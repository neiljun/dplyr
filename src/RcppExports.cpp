// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>
#include "../inst/include/dplyr.h"

using namespace Rcpp;

// filter_impl
SEXP filter_impl(DataFrame df, List args, Environment env);
RcppExport SEXP dplyr_filter_impl(SEXP dfSEXP, SEXP argsSEXP, SEXP envSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< DataFrame >::type df(dfSEXP );
        Rcpp::traits::input_parameter< List >::type args(argsSEXP );
        Rcpp::traits::input_parameter< Environment >::type env(envSEXP );
        SEXP __result = filter_impl(df, args, env);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// build_index_cpp
DataFrame build_index_cpp(DataFrame data);
RcppExport SEXP dplyr_build_index_cpp(SEXP dataSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< DataFrame >::type data(dataSEXP );
        DataFrame __result = build_index_cpp(data);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// semi_join_impl
DataFrame semi_join_impl(DataFrame x, DataFrame y, CharacterVector by);
RcppExport SEXP dplyr_semi_join_impl(SEXP xSEXP, SEXP ySEXP, SEXP bySEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< DataFrame >::type x(xSEXP );
        Rcpp::traits::input_parameter< DataFrame >::type y(ySEXP );
        Rcpp::traits::input_parameter< CharacterVector >::type by(bySEXP );
        DataFrame __result = semi_join_impl(x, y, by);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// anti_join_impl
DataFrame anti_join_impl(DataFrame x, DataFrame y, CharacterVector by);
RcppExport SEXP dplyr_anti_join_impl(SEXP xSEXP, SEXP ySEXP, SEXP bySEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< DataFrame >::type x(xSEXP );
        Rcpp::traits::input_parameter< DataFrame >::type y(ySEXP );
        Rcpp::traits::input_parameter< CharacterVector >::type by(bySEXP );
        DataFrame __result = anti_join_impl(x, y, by);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// inner_join_impl
DataFrame inner_join_impl(DataFrame x, DataFrame y, CharacterVector by);
RcppExport SEXP dplyr_inner_join_impl(SEXP xSEXP, SEXP ySEXP, SEXP bySEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< DataFrame >::type x(xSEXP );
        Rcpp::traits::input_parameter< DataFrame >::type y(ySEXP );
        Rcpp::traits::input_parameter< CharacterVector >::type by(bySEXP );
        DataFrame __result = inner_join_impl(x, y, by);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// left_join_impl
DataFrame left_join_impl(DataFrame x, DataFrame y, CharacterVector by);
RcppExport SEXP dplyr_left_join_impl(SEXP xSEXP, SEXP ySEXP, SEXP bySEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< DataFrame >::type x(xSEXP );
        Rcpp::traits::input_parameter< DataFrame >::type y(ySEXP );
        Rcpp::traits::input_parameter< CharacterVector >::type by(bySEXP );
        DataFrame __result = left_join_impl(x, y, by);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// compatible_data_frame
dplyr::BoolResult compatible_data_frame(DataFrame x, DataFrame y);
RcppExport SEXP dplyr_compatible_data_frame(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< DataFrame >::type x(xSEXP );
        Rcpp::traits::input_parameter< DataFrame >::type y(ySEXP );
        dplyr::BoolResult __result = compatible_data_frame(x, y);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// equal_data_frame
dplyr::BoolResult equal_data_frame(DataFrame x, DataFrame y);
RcppExport SEXP dplyr_equal_data_frame(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< DataFrame >::type x(xSEXP );
        Rcpp::traits::input_parameter< DataFrame >::type y(ySEXP );
        dplyr::BoolResult __result = equal_data_frame(x, y);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// all_equal_data_frame
dplyr::BoolResult all_equal_data_frame(List args, Environment env);
RcppExport SEXP dplyr_all_equal_data_frame(SEXP argsSEXP, SEXP envSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< List >::type args(argsSEXP );
        Rcpp::traits::input_parameter< Environment >::type env(envSEXP );
        dplyr::BoolResult __result = all_equal_data_frame(args, env);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// union_data_frame
DataFrame union_data_frame(DataFrame x, DataFrame y);
RcppExport SEXP dplyr_union_data_frame(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< DataFrame >::type x(xSEXP );
        Rcpp::traits::input_parameter< DataFrame >::type y(ySEXP );
        DataFrame __result = union_data_frame(x, y);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// mutate_impl
SEXP mutate_impl(DataFrame df, List args, Environment env);
RcppExport SEXP dplyr_mutate_impl(SEXP dfSEXP, SEXP argsSEXP, SEXP envSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< DataFrame >::type df(dfSEXP );
        Rcpp::traits::input_parameter< List >::type args(argsSEXP );
        Rcpp::traits::input_parameter< Environment >::type env(envSEXP );
        SEXP __result = mutate_impl(df, args, env);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// order_impl
IntegerVector order_impl(List args, Environment env);
RcppExport SEXP dplyr_order_impl(SEXP argsSEXP, SEXP envSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< List >::type args(argsSEXP );
        Rcpp::traits::input_parameter< Environment >::type env(envSEXP );
        IntegerVector __result = order_impl(args, env);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// arrange_impl
DataFrame arrange_impl(DataFrame data, List args, Environment env);
RcppExport SEXP dplyr_arrange_impl(SEXP dataSEXP, SEXP argsSEXP, SEXP envSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< DataFrame >::type data(dataSEXP );
        Rcpp::traits::input_parameter< List >::type args(argsSEXP );
        Rcpp::traits::input_parameter< Environment >::type env(envSEXP );
        DataFrame __result = arrange_impl(data, args, env);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// sort_impl
DataFrame sort_impl(DataFrame data);
RcppExport SEXP dplyr_sort_impl(SEXP dataSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< DataFrame >::type data(dataSEXP );
        DataFrame __result = sort_impl(data);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// split_indices
std::vector<std::vector<int> > split_indices(IntegerVector group, int groups);
RcppExport SEXP dplyr_split_indices(SEXP groupSEXP, SEXP groupsSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< IntegerVector >::type group(groupSEXP );
        Rcpp::traits::input_parameter< int >::type groups(groupsSEXP );
        std::vector<std::vector<int> > __result = split_indices(group, groups);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// group_size_grouped_cpp
IntegerVector group_size_grouped_cpp(GroupedDataFrame gdf);
RcppExport SEXP dplyr_group_size_grouped_cpp(SEXP gdfSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< GroupedDataFrame >::type gdf(gdfSEXP );
        IntegerVector __result = group_size_grouped_cpp(gdf);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// summarise_impl
SEXP summarise_impl(DataFrame df, List args, Environment env);
RcppExport SEXP dplyr_summarise_impl(SEXP dfSEXP, SEXP argsSEXP, SEXP envSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< DataFrame >::type df(dfSEXP );
        Rcpp::traits::input_parameter< List >::type args(argsSEXP );
        Rcpp::traits::input_parameter< Environment >::type env(envSEXP );
        SEXP __result = summarise_impl(df, args, env);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
