/*
 * Copyright 2022 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(SegmentDetection.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(7e613eb74e8b96f3f7411b89ca73758a)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/FDC/SegmentDetection.h>
// pydoc.h is automatically generated in the build directory
#include <SegmentDetection_pydoc.h>

void bind_SegmentDetection(py::module& m)
{

    using SegmentDetection    = ::gr::FDC::SegmentDetection;


    py::class_<SegmentDetection, gr::sync_block, gr::block, gr::basic_block,
        std::shared_ptr<SegmentDetection>>(m, "SegmentDetection", D(SegmentDetection))

        .def(py::init(&SegmentDetection::make),
           py::arg("ID"),
           py::arg("blocklen"),
           py::arg("relinvovl"),
           py::arg("seg_start"),
           py::arg("seg_stop"),
           py::arg("thresh"),
           py::arg("minchandist"),
           py::arg("window_flank_puffer"),
           py::arg("maxblocks_to_emit"),
           py::arg("channel_deactivation_delay"),
           py::arg("messageoutput"),
           py::arg("fileoutput"),
           py::arg("path"),
           py::arg("threads"),
           py::arg("verbose"),
           D(SegmentDetection,make)
        )
        



        ;




}








