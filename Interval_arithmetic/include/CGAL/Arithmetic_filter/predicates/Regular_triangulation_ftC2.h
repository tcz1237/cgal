// Copyright (c) 1997-2003  Utrecht University (The Netherlands),
// ETH Zurich (Switzerland), Freie Universitaet Berlin (Germany),
// INRIA Sophia-Antipolis (France), Martin-Luther-University Halle-Wittenberg
// (Germany), Max-Planck-Institute Saarbruecken (Germany), RISC Linz (Austria),
// and Tel-Aviv University (Israel).  All rights reserved.
//
// This file is part of CGAL (www.cgal.org); you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public License as
// published by the Free Software Foundation; version 2.1 of the License.
// See the file LICENSE.LGPL distributed with CGAL.
//
// Licensees holding a valid commercial license may use this file in
// accordance with the commercial license agreement provided with the software.
//
// This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
// WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
//
// $URL$
// $Id$
// 
//
// Author(s)     : Sylvain Pion

// This file is automatically generated by
// scripts/cgal_filtered_predicates_generator.pl

#ifndef CGAL_ARITHMETIC_FILTER_REGULAR_TRIANGULATION_FTC2_H
#define CGAL_ARITHMETIC_FILTER_REGULAR_TRIANGULATION_FTC2_H

#include <CGAL/Profile_counter.h>

CGAL_BEGIN_NAMESPACE
template <class ET> class Lazy_exact_nt;
CGAL_END_NAMESPACE

CGAL_BEGIN_NAMESPACE

template < class CT, class ET, bool Protected, class Cache >
/*  */
Comparison_result
compare_power_distanceC2(
    const Filtered_exact <CT, ET, Dynamic, Protected, Cache> &px,
    const Filtered_exact <CT, ET, Dynamic, Protected, Cache> &py,
    const Filtered_exact <CT, ET, Dynamic, Protected, Cache> &pwt,
    const Filtered_exact <CT, ET, Dynamic, Protected, Cache> &qx,
    const Filtered_exact <CT, ET, Dynamic, Protected, Cache> &qy,
    const Filtered_exact <CT, ET, Dynamic, Protected, Cache> &qwt,
    const Filtered_exact <CT, ET, Dynamic, Protected, Cache> &rx,
    const Filtered_exact <CT, ET, Dynamic, Protected, Cache> &ry)
{
  try
  {
    CGAL_PROFILER("IA compare_power_distanceC2 calls");
    Protect_FPU_rounding<Protected> Protection;
    return compare_power_distanceC2(
		px.interval(),
		py.interval(),
		pwt.interval(),
		qx.interval(),
		qy.interval(),
		qwt.interval(),
		rx.interval(),
		ry.interval());
  } 
  catch (Interval_nt_advanced::unsafe_comparison)
  {
    CGAL_PROFILER("IA compare_power_distanceC2 failures");
    Protect_FPU_rounding<!Protected> Protection(CGAL_FE_TONEAREST);
    return compare_power_distanceC2(
		px.exact(),
		py.exact(),
		pwt.exact(),
		qx.exact(),
		qy.exact(),
		qwt.exact(),
		rx.exact(),
		ry.exact());
  }
}

template < class ET >
/*  */
Comparison_result
compare_power_distanceC2(
    const Lazy_exact_nt<ET> &px,
    const Lazy_exact_nt<ET> &py,
    const Lazy_exact_nt<ET> &pwt,
    const Lazy_exact_nt<ET> &qx,
    const Lazy_exact_nt<ET> &qy,
    const Lazy_exact_nt<ET> &qwt,
    const Lazy_exact_nt<ET> &rx,
    const Lazy_exact_nt<ET> &ry)
{
  try
  {
    CGAL_PROFILER("Lazy IA compare_power_distanceC2 calls");
    Protect_FPU_rounding<true> Protection;
    return compare_power_distanceC2(
		px.interval(),
		py.interval(),
		pwt.interval(),
		qx.interval(),
		qy.interval(),
		qwt.interval(),
		rx.interval(),
		ry.interval());
  } 
  catch (Interval_nt_advanced::unsafe_comparison)
  {
    CGAL_PROFILER("Lazy IA compare_power_distanceC2 failures");
    Protect_FPU_rounding<false> Protection(CGAL_FE_TONEAREST);
    return compare_power_distanceC2(
		px.exact(),
		py.exact(),
		pwt.exact(),
		qx.exact(),
		qy.exact(),
		qwt.exact(),
		rx.exact(),
		ry.exact());
  }
}

template < class CT, class ET, bool Protected, class Cache >
/*  */
Oriented_side
power_testC2(
    const Filtered_exact <CT, ET, Dynamic, Protected, Cache> &px,
    const Filtered_exact <CT, ET, Dynamic, Protected, Cache> &py,
    const Filtered_exact <CT, ET, Dynamic, Protected, Cache> &pwt,
    const Filtered_exact <CT, ET, Dynamic, Protected, Cache> &qx,
    const Filtered_exact <CT, ET, Dynamic, Protected, Cache> &qy,
    const Filtered_exact <CT, ET, Dynamic, Protected, Cache> &qwt,
    const Filtered_exact <CT, ET, Dynamic, Protected, Cache> &rx,
    const Filtered_exact <CT, ET, Dynamic, Protected, Cache> &ry,
    const Filtered_exact <CT, ET, Dynamic, Protected, Cache> &rwt,
    const Filtered_exact <CT, ET, Dynamic, Protected, Cache> &tx,
    const Filtered_exact <CT, ET, Dynamic, Protected, Cache> &ty,
    const Filtered_exact <CT, ET, Dynamic, Protected, Cache> &twt)
{
  try
  {
    CGAL_PROFILER("IA power_testC2 calls");
    Protect_FPU_rounding<Protected> Protection;
    return power_testC2(
		px.interval(),
		py.interval(),
		pwt.interval(),
		qx.interval(),
		qy.interval(),
		qwt.interval(),
		rx.interval(),
		ry.interval(),
		rwt.interval(),
		tx.interval(),
		ty.interval(),
		twt.interval());
  } 
  catch (Interval_nt_advanced::unsafe_comparison)
  {
    CGAL_PROFILER("IA power_testC2 failures");
    Protect_FPU_rounding<!Protected> Protection(CGAL_FE_TONEAREST);
    return power_testC2(
		px.exact(),
		py.exact(),
		pwt.exact(),
		qx.exact(),
		qy.exact(),
		qwt.exact(),
		rx.exact(),
		ry.exact(),
		rwt.exact(),
		tx.exact(),
		ty.exact(),
		twt.exact());
  }
}

template < class ET >
/*  */
Oriented_side
power_testC2(
    const Lazy_exact_nt<ET> &px,
    const Lazy_exact_nt<ET> &py,
    const Lazy_exact_nt<ET> &pwt,
    const Lazy_exact_nt<ET> &qx,
    const Lazy_exact_nt<ET> &qy,
    const Lazy_exact_nt<ET> &qwt,
    const Lazy_exact_nt<ET> &rx,
    const Lazy_exact_nt<ET> &ry,
    const Lazy_exact_nt<ET> &rwt,
    const Lazy_exact_nt<ET> &tx,
    const Lazy_exact_nt<ET> &ty,
    const Lazy_exact_nt<ET> &twt)
{
  try
  {
    CGAL_PROFILER("Lazy IA power_testC2 calls");
    Protect_FPU_rounding<true> Protection;
    return power_testC2(
		px.interval(),
		py.interval(),
		pwt.interval(),
		qx.interval(),
		qy.interval(),
		qwt.interval(),
		rx.interval(),
		ry.interval(),
		rwt.interval(),
		tx.interval(),
		ty.interval(),
		twt.interval());
  } 
  catch (Interval_nt_advanced::unsafe_comparison)
  {
    CGAL_PROFILER("Lazy IA power_testC2 failures");
    Protect_FPU_rounding<false> Protection(CGAL_FE_TONEAREST);
    return power_testC2(
		px.exact(),
		py.exact(),
		pwt.exact(),
		qx.exact(),
		qy.exact(),
		qwt.exact(),
		rx.exact(),
		ry.exact(),
		rwt.exact(),
		tx.exact(),
		ty.exact(),
		twt.exact());
  }
}

template < class CT, class ET, bool Protected, class Cache >
/*  */
Oriented_side
power_testC2(
    const Filtered_exact <CT, ET, Dynamic, Protected, Cache> &px,
    const Filtered_exact <CT, ET, Dynamic, Protected, Cache> &py,
    const Filtered_exact <CT, ET, Dynamic, Protected, Cache> &pwt,
    const Filtered_exact <CT, ET, Dynamic, Protected, Cache> &qx,
    const Filtered_exact <CT, ET, Dynamic, Protected, Cache> &qy,
    const Filtered_exact <CT, ET, Dynamic, Protected, Cache> &qwt,
    const Filtered_exact <CT, ET, Dynamic, Protected, Cache> &tx,
    const Filtered_exact <CT, ET, Dynamic, Protected, Cache> &ty,
    const Filtered_exact <CT, ET, Dynamic, Protected, Cache> &twt)
{
  try
  {
    CGAL_PROFILER("IA power_testC2 calls");
    Protect_FPU_rounding<Protected> Protection;
    return power_testC2(
		px.interval(),
		py.interval(),
		pwt.interval(),
		qx.interval(),
		qy.interval(),
		qwt.interval(),
		tx.interval(),
		ty.interval(),
		twt.interval());
  } 
  catch (Interval_nt_advanced::unsafe_comparison)
  {
    CGAL_PROFILER("IA power_testC2 failures");
    Protect_FPU_rounding<!Protected> Protection(CGAL_FE_TONEAREST);
    return power_testC2(
		px.exact(),
		py.exact(),
		pwt.exact(),
		qx.exact(),
		qy.exact(),
		qwt.exact(),
		tx.exact(),
		ty.exact(),
		twt.exact());
  }
}

template < class ET >
/*  */
Oriented_side
power_testC2(
    const Lazy_exact_nt<ET> &px,
    const Lazy_exact_nt<ET> &py,
    const Lazy_exact_nt<ET> &pwt,
    const Lazy_exact_nt<ET> &qx,
    const Lazy_exact_nt<ET> &qy,
    const Lazy_exact_nt<ET> &qwt,
    const Lazy_exact_nt<ET> &tx,
    const Lazy_exact_nt<ET> &ty,
    const Lazy_exact_nt<ET> &twt)
{
  try
  {
    CGAL_PROFILER("Lazy IA power_testC2 calls");
    Protect_FPU_rounding<true> Protection;
    return power_testC2(
		px.interval(),
		py.interval(),
		pwt.interval(),
		qx.interval(),
		qy.interval(),
		qwt.interval(),
		tx.interval(),
		ty.interval(),
		twt.interval());
  } 
  catch (Interval_nt_advanced::unsafe_comparison)
  {
    CGAL_PROFILER("Lazy IA power_testC2 failures");
    Protect_FPU_rounding<false> Protection(CGAL_FE_TONEAREST);
    return power_testC2(
		px.exact(),
		py.exact(),
		pwt.exact(),
		qx.exact(),
		qy.exact(),
		qwt.exact(),
		tx.exact(),
		ty.exact(),
		twt.exact());
  }
}

CGAL_END_NAMESPACE

#endif // CGAL_ARITHMETIC_FILTER_REGULAR_TRIANGULATION_FTC2_H
