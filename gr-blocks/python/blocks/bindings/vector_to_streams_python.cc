/*
 * Copyright 2020 Free Software Foundation, Inc.
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
/* BINDTOOL_HEADER_FILE(vector_to_streams.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(e0a7722912ca2d7cc6dd3a89da23e038)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/blocks/vector_to_streams.h>
// pydoc.h is automatically generated in the build directory
#include <vector_to_streams_pydoc.h>

void bind_vector_to_streams(py::module& m)
{

    using vector_to_streams = ::gr::blocks::vector_to_streams;


    py::class_<vector_to_streams,
               gr::sync_block,
               gr::block,
               gr::basic_block,
               std::shared_ptr<vector_to_streams>>(
        m, "vector_to_streams", D(vector_to_streams))

        .def(py::init(&vector_to_streams::make),
             py::arg("itemsize"),
             py::arg("nstreams"),
             D(vector_to_streams, make))


        ;
}