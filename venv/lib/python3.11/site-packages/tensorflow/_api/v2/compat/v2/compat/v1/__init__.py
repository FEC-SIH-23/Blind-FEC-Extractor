# Copyright 2015 The TensorFlow Authors. All Rights Reserved.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
# ==============================================================================
"""Bring in all of the public TensorFlow interface into this module."""

# pylint: disable=g-bad-import-order,g-import-not-at-top,protected-access

import os as _os
import sys as _sys
import typing as _typing

from tensorflow.python.tools import module_util as _module_util
from tensorflow.python.util.lazy_loader import LazyLoader as _LazyLoader
from tensorflow.python.util.lazy_loader import KerasLazyLoader as _KerasLazyLoader

from tensorflow._api.v2.compat.v1 import __internal__
from tensorflow._api.v2.compat.v1 import app
from tensorflow._api.v2.compat.v1 import audio
from tensorflow._api.v2.compat.v1 import autograph
from tensorflow._api.v2.compat.v1 import bitwise
from tensorflow._api.v2.compat.v1 import compat
from tensorflow._api.v2.compat.v1 import config
from tensorflow._api.v2.compat.v1 import data
from tensorflow._api.v2.compat.v1 import debugging
from tensorflow._api.v2.compat.v1 import distribute
from tensorflow._api.v2.compat.v1 import distributions
from tensorflow._api.v2.compat.v1 import dtypes
from tensorflow._api.v2.compat.v1 import errors
from tensorflow._api.v2.compat.v1 import experimental
from tensorflow._api.v2.compat.v1 import feature_column
from tensorflow._api.v2.compat.v1 import gfile
from tensorflow._api.v2.compat.v1 import graph_util
from tensorflow._api.v2.compat.v1 import image
from tensorflow._api.v2.compat.v1 import initializers
from tensorflow._api.v2.compat.v1 import io
from tensorflow._api.v2.compat.v1 import layers
from tensorflow._api.v2.compat.v1 import linalg
from tensorflow._api.v2.compat.v1 import lite
from tensorflow._api.v2.compat.v1 import logging
from tensorflow._api.v2.compat.v1 import lookup
from tensorflow._api.v2.compat.v1 import losses
from tensorflow._api.v2.compat.v1 import manip
from tensorflow._api.v2.compat.v1 import math
from tensorflow._api.v2.compat.v1 import metrics
from tensorflow._api.v2.compat.v1 import mixed_precision
from tensorflow._api.v2.compat.v1 import mlir
from tensorflow._api.v2.compat.v1 import nest
from tensorflow._api.v2.compat.v1 import nn
from tensorflow._api.v2.compat.v1 import profiler
from tensorflow._api.v2.compat.v1 import python_io
from tensorflow._api.v2.compat.v1 import quantization
from tensorflow._api.v2.compat.v1 import queue
from tensorflow._api.v2.compat.v1 import ragged
from tensorflow._api.v2.compat.v1 import random
from tensorflow._api.v2.compat.v1 import raw_ops
from tensorflow._api.v2.compat.v1 import resource_loader
from tensorflow._api.v2.compat.v1 import saved_model
from tensorflow._api.v2.compat.v1 import sets
from tensorflow._api.v2.compat.v1 import signal
from tensorflow._api.v2.compat.v1 import sparse
from tensorflow._api.v2.compat.v1 import spectral
from tensorflow._api.v2.compat.v1 import strings
from tensorflow._api.v2.compat.v1 import summary
from tensorflow._api.v2.compat.v1 import sysconfig
from tensorflow._api.v2.compat.v1 import test
from tensorflow._api.v2.compat.v1 import tpu
from tensorflow._api.v2.compat.v1 import train
from tensorflow._api.v2.compat.v1 import types
from tensorflow._api.v2.compat.v1 import user_ops
from tensorflow._api.v2.compat.v1 import version
from tensorflow._api.v2.compat.v1 import xla
from tensorflow.python.ops.gen_array_ops import batch_to_space_nd # line: 343
from tensorflow.python.ops.gen_array_ops import bitcast # line: 558
from tensorflow.python.ops.gen_array_ops import broadcast_to # line: 829
from tensorflow.python.ops.gen_array_ops import check_numerics # line: 950
from tensorflow.python.ops.gen_array_ops import diag # line: 1949
from tensorflow.python.ops.gen_array_ops import extract_volume_patches # line: 2569
from tensorflow.python.ops.gen_array_ops import fake_quant_with_min_max_args # line: 2698
from tensorflow.python.ops.gen_array_ops import fake_quant_with_min_max_args_gradient # line: 2867
from tensorflow.python.ops.gen_array_ops import fake_quant_with_min_max_vars # line: 3003
from tensorflow.python.ops.gen_array_ops import fake_quant_with_min_max_vars_gradient # line: 3145
from tensorflow.python.ops.gen_array_ops import fake_quant_with_min_max_vars_per_channel # line: 3276
from tensorflow.python.ops.gen_array_ops import fake_quant_with_min_max_vars_per_channel_gradient # line: 3423
from tensorflow.python.ops.gen_array_ops import identity_n # line: 4226
from tensorflow.python.ops.gen_array_ops import invert_permutation # line: 4592
from tensorflow.python.ops.gen_array_ops import matrix_band_part # line: 4879
from tensorflow.python.ops.gen_array_ops import quantized_concat # line: 8202
from tensorflow.python.ops.gen_array_ops import reverse_v2 as reverse # line: 9140
from tensorflow.python.ops.gen_array_ops import reverse_v2 # line: 9140
from tensorflow.python.ops.gen_array_ops import scatter_nd # line: 9276
from tensorflow.python.ops.gen_array_ops import space_to_batch_nd # line: 10076
from tensorflow.python.ops.gen_array_ops import tensor_scatter_add # line: 11226
from tensorflow.python.ops.gen_array_ops import tensor_scatter_add as tensor_scatter_nd_add # line: 11226
from tensorflow.python.ops.gen_array_ops import tensor_scatter_max as tensor_scatter_nd_max # line: 11382
from tensorflow.python.ops.gen_array_ops import tensor_scatter_min as tensor_scatter_nd_min # line: 11488
from tensorflow.python.ops.gen_array_ops import tensor_scatter_sub as tensor_scatter_nd_sub # line: 11583
from tensorflow.python.ops.gen_array_ops import tensor_scatter_sub # line: 11583
from tensorflow.python.ops.gen_array_ops import tile # line: 11970
from tensorflow.python.ops.gen_array_ops import unravel_index # line: 12731
from tensorflow.python.ops.gen_control_flow_ops import no_op # line: 475
from tensorflow.python.ops.gen_data_flow_ops import dynamic_partition # line: 594
from tensorflow.python.ops.gen_data_flow_ops import dynamic_stitch # line: 736
from tensorflow.python.ops.gen_io_ops import matching_files # line: 391
from tensorflow.python.ops.gen_io_ops import write_file # line: 2269
from tensorflow.python.ops.gen_linalg_ops import cholesky # line: 766
from tensorflow.python.ops.gen_linalg_ops import matrix_determinant # line: 1370
from tensorflow.python.ops.gen_linalg_ops import matrix_inverse # line: 1516
from tensorflow.python.ops.gen_linalg_ops import matrix_solve # line: 1694
from tensorflow.python.ops.gen_linalg_ops import matrix_square_root # line: 1913
from tensorflow.python.ops.gen_linalg_ops import qr # line: 2150
from tensorflow.python.ops.gen_logging_ops import timestamp # line: 886
from tensorflow.python.ops.gen_math_ops import acosh # line: 231
from tensorflow.python.ops.gen_math_ops import asin # line: 991
from tensorflow.python.ops.gen_math_ops import asinh # line: 1091
from tensorflow.python.ops.gen_math_ops import atan # line: 1184
from tensorflow.python.ops.gen_math_ops import atan2 # line: 1284
from tensorflow.python.ops.gen_math_ops import atanh # line: 1383
from tensorflow.python.ops.gen_math_ops import betainc # line: 1787
from tensorflow.python.ops.gen_math_ops import cos # line: 2464
from tensorflow.python.ops.gen_math_ops import cosh # line: 2558
from tensorflow.python.ops.gen_math_ops import cross # line: 2651
from tensorflow.python.ops.gen_math_ops import digamma # line: 3161
from tensorflow.python.ops.gen_math_ops import erf # line: 3454
from tensorflow.python.ops.gen_math_ops import erfc # line: 3546
from tensorflow.python.ops.gen_math_ops import expm1 # line: 3847
from tensorflow.python.ops.gen_math_ops import floor_div # line: 4002
from tensorflow.python.ops.gen_math_ops import floor_mod as floormod # line: 4092
from tensorflow.python.ops.gen_math_ops import greater # line: 4186
from tensorflow.python.ops.gen_math_ops import greater_equal # line: 4287
from tensorflow.python.ops.gen_math_ops import igamma # line: 4480
from tensorflow.python.ops.gen_math_ops import igammac # line: 4639
from tensorflow.python.ops.gen_math_ops import is_finite # line: 4935
from tensorflow.python.ops.gen_math_ops import is_inf # line: 5031
from tensorflow.python.ops.gen_math_ops import is_nan # line: 5127
from tensorflow.python.ops.gen_math_ops import less # line: 5223
from tensorflow.python.ops.gen_math_ops import less_equal # line: 5324
from tensorflow.python.ops.gen_math_ops import lgamma # line: 5425
from tensorflow.python.ops.gen_math_ops import log # line: 5595
from tensorflow.python.ops.gen_math_ops import log1p # line: 5689
from tensorflow.python.ops.gen_math_ops import logical_and # line: 5779
from tensorflow.python.ops.gen_math_ops import logical_not # line: 5918
from tensorflow.python.ops.gen_math_ops import logical_or # line: 6005
from tensorflow.python.ops.gen_math_ops import maximum # line: 6310
from tensorflow.python.ops.gen_math_ops import minimum # line: 6566
from tensorflow.python.ops.gen_math_ops import floor_mod as mod # line: 4092
from tensorflow.python.ops.gen_math_ops import neg as negative # line: 6913
from tensorflow.python.ops.gen_math_ops import polygamma # line: 7167
from tensorflow.python.ops.gen_math_ops import real_div as realdiv # line: 8068
from tensorflow.python.ops.gen_math_ops import reciprocal # line: 8159
from tensorflow.python.ops.gen_math_ops import rint # line: 8656
from tensorflow.python.ops.gen_math_ops import segment_max # line: 8930
from tensorflow.python.ops.gen_math_ops import segment_mean # line: 9164
from tensorflow.python.ops.gen_math_ops import segment_min # line: 9289
from tensorflow.python.ops.gen_math_ops import segment_prod # line: 9523
from tensorflow.python.ops.gen_math_ops import segment_sum # line: 9749
from tensorflow.python.ops.gen_math_ops import sin # line: 10299
from tensorflow.python.ops.gen_math_ops import sinh # line: 10392
from tensorflow.python.ops.gen_math_ops import square # line: 11962
from tensorflow.python.ops.gen_math_ops import squared_difference # line: 12051
from tensorflow.python.ops.gen_math_ops import tan # line: 12352
from tensorflow.python.ops.gen_math_ops import tanh # line: 12446
from tensorflow.python.ops.gen_math_ops import truncate_div as truncatediv # line: 12601
from tensorflow.python.ops.gen_math_ops import truncate_mod as truncatemod # line: 12695
from tensorflow.python.ops.gen_math_ops import unsorted_segment_max # line: 12789
from tensorflow.python.ops.gen_math_ops import unsorted_segment_min # line: 12927
from tensorflow.python.ops.gen_math_ops import unsorted_segment_prod # line: 13061
from tensorflow.python.ops.gen_math_ops import unsorted_segment_sum # line: 13195
from tensorflow.python.ops.gen_math_ops import zeta # line: 13530
from tensorflow.python.ops.gen_nn_ops import approx_top_k # line: 33
from tensorflow.python.ops.gen_nn_ops import conv # line: 1061
from tensorflow.python.ops.gen_nn_ops import conv2d_backprop_filter_v2 # line: 1609
from tensorflow.python.ops.gen_nn_ops import conv2d_backprop_input_v2 # line: 1977
from tensorflow.python.ops.gen_parsing_ops import decode_compressed # line: 144
from tensorflow.python.ops.gen_parsing_ops import parse_tensor # line: 2135
from tensorflow.python.ops.gen_ragged_array_ops import ragged_fill_empty_rows # line: 196
from tensorflow.python.ops.gen_ragged_array_ops import ragged_fill_empty_rows_grad # line: 305
from tensorflow.python.ops.gen_random_index_shuffle_ops import random_index_shuffle # line: 30
from tensorflow.python.ops.gen_spectral_ops import fft # line: 353
from tensorflow.python.ops.gen_spectral_ops import fft2d # line: 442
from tensorflow.python.ops.gen_spectral_ops import fft3d # line: 531
from tensorflow.python.ops.gen_spectral_ops import fftnd # line: 620
from tensorflow.python.ops.gen_spectral_ops import ifft # line: 724
from tensorflow.python.ops.gen_spectral_ops import ifft2d # line: 813
from tensorflow.python.ops.gen_spectral_ops import ifft3d # line: 902
from tensorflow.python.ops.gen_spectral_ops import ifftnd # line: 991
from tensorflow.python.ops.gen_spectral_ops import irfftnd # line: 1347
from tensorflow.python.ops.gen_spectral_ops import rfftnd # line: 1707
from tensorflow.python.ops.gen_string_ops import as_string # line: 29
from tensorflow.python.ops.gen_string_ops import decode_base64 # line: 182
from tensorflow.python.ops.gen_string_ops import encode_base64 # line: 269
from tensorflow.python.ops.gen_string_ops import string_strip # line: 1429
from tensorflow.python.ops.gen_string_ops import string_to_hash_bucket_fast # line: 1583
from tensorflow.python.ops.gen_string_ops import string_to_hash_bucket_strong # line: 1688
from tensorflow.python.client.session import InteractiveSession # line: 1720
from tensorflow.python.client.session import Session # line: 1541
from tensorflow.python.compat.v2_compat import disable_v2_behavior # line: 83
from tensorflow.python.compat.v2_compat import enable_v2_behavior # line: 39
from tensorflow.python.data.ops.optional_ops import OptionalSpec # line: 205
from tensorflow.python.eager.backprop import GradientTape # line: 704
from tensorflow.python.eager.context import executing_eagerly_v1 as executing_eagerly # line: 2354
from tensorflow.python.eager.polymorphic_function.polymorphic_function import function # line: 1276
from tensorflow.python.eager.wrap_function import wrap_function # line: 576
from tensorflow.python.framework.constant_op import constant_v1 as constant # line: 106
from tensorflow.python.framework.device_spec import DeviceSpecV1 as DeviceSpec # line: 420
from tensorflow.python.framework.dtypes import DType # line: 51
from tensorflow.python.framework.dtypes import QUANTIZED_DTYPES # line: 771
from tensorflow.python.framework.dtypes import as_dtype # line: 793
from tensorflow.python.framework.dtypes import bfloat16 # line: 450
from tensorflow.python.framework.dtypes import bool # line: 414
from tensorflow.python.framework.dtypes import complex128 # line: 401
from tensorflow.python.framework.dtypes import complex64 # line: 394
from tensorflow.python.framework.dtypes import double # line: 388
from tensorflow.python.framework.dtypes import float16 # line: 373
from tensorflow.python.framework.dtypes import float32 # line: 380
from tensorflow.python.framework.dtypes import float64 # line: 386
from tensorflow.python.framework.dtypes import half # line: 374
from tensorflow.python.framework.dtypes import int16 # line: 354
from tensorflow.python.framework.dtypes import int32 # line: 360
from tensorflow.python.framework.dtypes import int64 # line: 366
from tensorflow.python.framework.dtypes import int8 # line: 348
from tensorflow.python.framework.dtypes import qint16 # line: 426
from tensorflow.python.framework.dtypes import qint32 # line: 432
from tensorflow.python.framework.dtypes import qint8 # line: 420
from tensorflow.python.framework.dtypes import quint16 # line: 444
from tensorflow.python.framework.dtypes import quint8 # line: 438
from tensorflow.python.framework.dtypes import resource # line: 312
from tensorflow.python.framework.dtypes import string # line: 408
from tensorflow.python.framework.dtypes import uint16 # line: 330
from tensorflow.python.framework.dtypes import uint32 # line: 336
from tensorflow.python.framework.dtypes import uint64 # line: 342
from tensorflow.python.framework.dtypes import uint8 # line: 324
from tensorflow.python.framework.dtypes import variant # line: 318
from tensorflow.python.framework.errors_impl import OpError # line: 57
from tensorflow.python.framework.graph_util_impl import GraphDef # line: 29
from tensorflow.python.framework.importer import import_graph_def # line: 354
from tensorflow.python.framework.indexed_slices import IndexedSlices # line: 54
from tensorflow.python.framework.indexed_slices import IndexedSlicesSpec # line: 203
from tensorflow.python.framework.indexed_slices import convert_to_tensor_or_indexed_slices # line: 277
from tensorflow.python.framework.load_library import load_file_system_library # line: 79
from tensorflow.python.framework.load_library import load_library # line: 120
from tensorflow.python.framework.load_library import load_op_library # line: 31
from tensorflow.python.framework.ops import Graph # line: 1912
from tensorflow.python.framework.ops import GraphKeys # line: 5149
from tensorflow.python.framework.ops import no_gradient as NoGradient # line: 1687
from tensorflow.python.framework.ops import no_gradient as NotDifferentiable # line: 1687
from tensorflow.python.framework.ops import Operation # line: 1032
from tensorflow.python.framework.ops import RegisterGradient # line: 1638
from tensorflow.python.framework.ops import add_to_collection # line: 5307
from tensorflow.python.framework.ops import add_to_collections # line: 5327
from tensorflow.python.framework.ops import _colocate_with as colocate_with # line: 4420
from tensorflow.python.framework.ops import container # line: 4377
from tensorflow.python.framework.ops import control_dependencies # line: 4425
from tensorflow.python.framework.ops import device # line: 4302
from tensorflow.python.framework.ops import disable_eager_execution # line: 4863
from tensorflow.python.framework.ops import enable_eager_execution # line: 4785
from tensorflow.python.framework.ops import executing_eagerly_outside_functions # line: 4731
from tensorflow.python.framework.ops import get_collection # line: 5371
from tensorflow.python.framework.ops import get_collection_ref # line: 5347
from tensorflow.python.framework.ops import get_default_graph # line: 5010
from tensorflow.python.framework.ops import init_scope # line: 4626
from tensorflow.python.framework.ops import is_symbolic_tensor # line: 6076
from tensorflow.python.framework.ops import name_scope_v1 as name_scope # line: 5525
from tensorflow.python.framework.ops import no_gradient # line: 1687
from tensorflow.python.framework.ops import op_scope # line: 5761
from tensorflow.python.framework.ops import reset_default_graph # line: 4980
from tensorflow.python.framework.random_seed import get_seed # line: 38
from tensorflow.python.framework.random_seed import set_random_seed # line: 96
from tensorflow.python.framework.sparse_tensor import SparseTensor # line: 47
from tensorflow.python.framework.sparse_tensor import SparseTensorSpec # line: 377
from tensorflow.python.framework.sparse_tensor import SparseTensorValue # line: 373
from tensorflow.python.framework.sparse_tensor import convert_to_tensor_or_sparse_tensor # line: 534
from tensorflow.python.framework.stack import get_default_session # line: 118
from tensorflow.python.framework.tensor import Tensor # line: 139
from tensorflow.python.framework.tensor import TensorSpec # line: 918
from tensorflow.python.framework.tensor import disable_tensor_equality # line: 784
from tensorflow.python.framework.tensor import enable_tensor_equality # line: 770
from tensorflow.python.framework.tensor_conversion import convert_to_tensor_v1_with_dispatch as convert_to_tensor # line: 33
from tensorflow.python.framework.tensor_conversion_registry import register_tensor_conversion_function # line: 80
from tensorflow.python.framework.tensor_shape import Dimension # line: 188
from tensorflow.python.framework.tensor_shape import TensorShape # line: 747
from tensorflow.python.framework.tensor_shape import dimension_at_index # line: 139
from tensorflow.python.framework.tensor_shape import dimension_value # line: 103
from tensorflow.python.framework.tensor_shape import disable_v2_tensorshape # line: 91
from tensorflow.python.framework.tensor_shape import enable_v2_tensorshape # line: 38
from tensorflow.python.framework.tensor_util import constant_value as get_static_value # line: 896
from tensorflow.python.framework.tensor_util import is_tf_type as is_tensor # line: 1128
from tensorflow.python.framework.tensor_util import MakeNdarray as make_ndarray # line: 633
from tensorflow.python.framework.tensor_util import make_tensor_proto # line: 425
from tensorflow.python.framework.type_spec import TypeSpec # line: 50
from tensorflow.python.framework.type_spec import type_spec_from_value # line: 959
from tensorflow.python.framework.versions import COMPILER_VERSION # line: 41
from tensorflow.python.framework.versions import CXX11_ABI_FLAG # line: 48
from tensorflow.python.framework.versions import CXX_VERSION # line: 54
from tensorflow.python.framework.versions import GIT_VERSION # line: 35
from tensorflow.python.framework.versions import GRAPH_DEF_VERSION # line: 68
from tensorflow.python.framework.versions import GRAPH_DEF_VERSION_MIN_CONSUMER # line: 74
from tensorflow.python.framework.versions import GRAPH_DEF_VERSION_MIN_PRODUCER # line: 82
from tensorflow.python.framework.versions import MONOLITHIC_BUILD # line: 60
from tensorflow.python.framework.versions import VERSION # line: 29
from tensorflow.python.framework.versions import COMPILER_VERSION as __compiler_version__ # line: 41
from tensorflow.python.framework.versions import CXX11_ABI_FLAG as __cxx11_abi_flag__ # line: 48
from tensorflow.python.framework.versions import CXX_VERSION as __cxx_version__ # line: 54
from tensorflow.python.framework.versions import GIT_VERSION as __git_version__ # line: 35
from tensorflow.python.framework.versions import MONOLITHIC_BUILD as __monolithic_build__ # line: 60
from tensorflow.python.framework.versions import VERSION as __version__ # line: 29
from tensorflow.python.module.module import Module # line: 29
from tensorflow.python.ops.array_ops import batch_gather # line: 5263
from tensorflow.python.ops.array_ops import batch_to_space # line: 4078
from tensorflow.python.ops.array_ops import boolean_mask # line: 1691
from tensorflow.python.ops.array_ops import broadcast_dynamic_shape # line: 528
from tensorflow.python.ops.array_ops import broadcast_static_shape # line: 562
from tensorflow.python.ops.array_ops import concat # line: 1596
from tensorflow.python.ops.array_ops import depth_to_space # line: 4059
from tensorflow.python.ops.array_ops import dequantize # line: 6139
from tensorflow.python.ops.array_ops import tensor_diag_part as diag_part # line: 2634
from tensorflow.python.ops.array_ops import edit_distance # line: 3770
from tensorflow.python.ops.array_ops import expand_dims # line: 320
from tensorflow.python.ops.array_ops import extract_image_patches # line: 6538
from tensorflow.python.ops.array_ops import fill # line: 206
from tensorflow.python.ops.array_ops import fingerprint # line: 6587
from tensorflow.python.ops.array_ops import gather # line: 5027
from tensorflow.python.ops.array_ops import gather_nd # line: 5402
from tensorflow.python.ops.array_ops import guarantee_const # line: 6926
from tensorflow.python.ops.array_ops import identity # line: 255
from tensorflow.python.ops.array_ops import matrix_diag # line: 2322
from tensorflow.python.ops.array_ops import matrix_diag_part # line: 2491
from tensorflow.python.ops.array_ops import matrix_set_diag # line: 2679
from tensorflow.python.ops.array_ops import matrix_transpose # line: 2242
from tensorflow.python.ops.array_ops import meshgrid # line: 3624
from tensorflow.python.ops.array_ops import newaxis # line: 58
from tensorflow.python.ops.array_ops import one_hot # line: 4234
from tensorflow.python.ops.array_ops import ones # line: 3163
from tensorflow.python.ops.array_ops import ones_like # line: 3061
from tensorflow.python.ops.array_ops import pad # line: 3502
from tensorflow.python.ops.array_ops import parallel_stack # line: 1414
from tensorflow.python.ops.array_ops import placeholder # line: 3222
from tensorflow.python.ops.array_ops import placeholder_with_default # line: 3277
from tensorflow.python.ops.array_ops import quantize # line: 6100
from tensorflow.python.ops.array_ops import quantize_v2 # line: 6046
from tensorflow.python.ops.array_ops import rank # line: 879
from tensorflow.python.ops.array_ops import repeat # line: 6872
from tensorflow.python.ops.array_ops import required_space_to_batch_paddings # line: 3928
from tensorflow.python.ops.array_ops import reshape # line: 65
from tensorflow.python.ops.array_ops import reverse_sequence # line: 4904
from tensorflow.python.ops.array_ops import searchsorted # line: 6330
from tensorflow.python.ops.array_ops import sequence_mask # line: 4412
from tensorflow.python.ops.array_ops import setdiff1d # line: 484
from tensorflow.python.ops.array_ops import shape # line: 659
from tensorflow.python.ops.array_ops import shape_n # line: 732
from tensorflow.python.ops.array_ops import size # line: 802
from tensorflow.python.ops.array_ops import slice # line: 1171
from tensorflow.python.ops.array_ops import space_to_batch # line: 4007
from tensorflow.python.ops.array_ops import space_to_depth # line: 4040
from tensorflow.python.ops.array_ops import sparse_mask # line: 1845
from tensorflow.python.ops.array_ops import sparse_placeholder # line: 3329
from tensorflow.python.ops.array_ops import split # line: 1990
from tensorflow.python.ops.array_ops import squeeze # line: 4479
from tensorflow.python.ops.array_ops import stop_gradient # line: 6945
from tensorflow.python.ops.array_ops import strided_slice # line: 1227
from tensorflow.python.ops.array_ops import tensor_scatter_nd_update # line: 5757
from tensorflow.python.ops.array_ops import tensor_scatter_nd_update as tensor_scatter_update # line: 5757
from tensorflow.python.ops.array_ops import transpose # line: 2153
from tensorflow.python.ops.array_ops import unique # line: 1889
from tensorflow.python.ops.array_ops import unique_with_counts # line: 1937
from tensorflow.python.ops.array_ops import where # line: 4610
from tensorflow.python.ops.array_ops import where_v2 # line: 4691
from tensorflow.python.ops.array_ops import zeros # line: 2845
from tensorflow.python.ops.array_ops import zeros_like # line: 2907
from tensorflow.python.ops.array_ops_stack import stack # line: 24
from tensorflow.python.ops.array_ops_stack import unstack # line: 88
from tensorflow.python.ops.batch_ops import batch_function as nondifferentiable_batch_function # line: 28
from tensorflow.python.ops.bincount_ops import bincount_v1 as bincount # line: 190
from tensorflow.python.ops.check_ops import assert_equal # line: 770
from tensorflow.python.ops.check_ops import assert_greater # line: 987
from tensorflow.python.ops.check_ops import assert_greater_equal # line: 1005
from tensorflow.python.ops.check_ops import assert_integer # line: 1448
from tensorflow.python.ops.check_ops import assert_less # line: 950
from tensorflow.python.ops.check_ops import assert_less_equal # line: 968
from tensorflow.python.ops.check_ops import assert_near # line: 858
from tensorflow.python.ops.check_ops import assert_negative # line: 576
from tensorflow.python.ops.check_ops import assert_non_negative # line: 685
from tensorflow.python.ops.check_ops import assert_non_positive # line: 741
from tensorflow.python.ops.check_ops import assert_none_equal # line: 792
from tensorflow.python.ops.check_ops import assert_positive # line: 630
from tensorflow.python.ops.check_ops import assert_proper_iterable # line: 511
from tensorflow.python.ops.check_ops import assert_rank # line: 1098
from tensorflow.python.ops.check_ops import assert_rank_at_least # line: 1196
from tensorflow.python.ops.check_ops import assert_rank_in # line: 1362
from tensorflow.python.ops.check_ops import assert_same_float_dtype # line: 2118
from tensorflow.python.ops.check_ops import assert_scalar # line: 2176
from tensorflow.python.ops.check_ops import assert_type # line: 1522
from tensorflow.python.ops.check_ops import ensure_shape # line: 2218
from tensorflow.python.ops.check_ops import is_non_decreasing # line: 1986
from tensorflow.python.ops.check_ops import is_numeric_tensor # line: 1951
from tensorflow.python.ops.check_ops import is_strictly_increasing # line: 2028
from tensorflow.python.ops.clip_ops import clip_by_average_norm # line: 390
from tensorflow.python.ops.clip_ops import clip_by_global_norm # line: 288
from tensorflow.python.ops.clip_ops import clip_by_norm # line: 150
from tensorflow.python.ops.clip_ops import clip_by_value # line: 32
from tensorflow.python.ops.clip_ops import global_norm # line: 235
from tensorflow.python.ops.cond import cond # line: 39
from tensorflow.python.ops.confusion_matrix import confusion_matrix_v1 as confusion_matrix # line: 199
from tensorflow.python.ops.control_flow_assert import Assert # line: 62
from tensorflow.python.ops.control_flow_case import case # line: 138
from tensorflow.python.ops.control_flow_ops import group # line: 1958
from tensorflow.python.ops.control_flow_ops import tuple # line: 2106
from tensorflow.python.ops.control_flow_switch_case import switch_case # line: 181
from tensorflow.python.ops.control_flow_v2_toggles import control_flow_v2_enabled # line: 64
from tensorflow.python.ops.control_flow_v2_toggles import disable_control_flow_v2 # line: 48
from tensorflow.python.ops.control_flow_v2_toggles import enable_control_flow_v2 # line: 25
from tensorflow.python.ops.critical_section_ops import CriticalSection # line: 121
from tensorflow.python.ops.custom_gradient import custom_gradient # line: 45
from tensorflow.python.ops.custom_gradient import grad_pass_through # line: 777
from tensorflow.python.ops.custom_gradient import recompute_grad # line: 604
from tensorflow.python.ops.data_flow_ops import ConditionalAccumulator # line: 1321
from tensorflow.python.ops.data_flow_ops import ConditionalAccumulatorBase # line: 1241
from tensorflow.python.ops.data_flow_ops import FIFOQueue # line: 712
from tensorflow.python.ops.data_flow_ops import PaddingFIFOQueue # line: 848
from tensorflow.python.ops.data_flow_ops import PriorityQueue # line: 924
from tensorflow.python.ops.data_flow_ops import QueueBase # line: 115
from tensorflow.python.ops.data_flow_ops import RandomShuffleQueue # line: 622
from tensorflow.python.ops.data_flow_ops import SparseConditionalAccumulator # line: 1412
from tensorflow.python.ops.functional_ops import foldl # line: 42
from tensorflow.python.ops.functional_ops import foldr # line: 238
from tensorflow.python.ops.functional_ops import scan # line: 435
from tensorflow.python.ops.gradients_impl import gradients # line: 51
from tensorflow.python.ops.gradients_impl import hessians # line: 384
from tensorflow.python.ops.gradients_util import AggregationMethod # line: 943
from tensorflow.python.ops.histogram_ops import histogram_fixed_width # line: 103
from tensorflow.python.ops.histogram_ops import histogram_fixed_width_bins # line: 31
from tensorflow.python.ops.init_ops import Constant as constant_initializer # line: 219
from tensorflow.python.ops.init_ops import GlorotNormal as glorot_normal_initializer # line: 1627
from tensorflow.python.ops.init_ops import GlorotUniform as glorot_uniform_initializer # line: 1595
from tensorflow.python.ops.init_ops import Ones as ones_initializer # line: 182
from tensorflow.python.ops.init_ops import Orthogonal as orthogonal_initializer # line: 895
from tensorflow.python.ops.init_ops import RandomNormal as random_normal_initializer # line: 487
from tensorflow.python.ops.init_ops import RandomUniform as random_uniform_initializer # line: 397
from tensorflow.python.ops.init_ops import TruncatedNormal as truncated_normal_initializer # line: 577
from tensorflow.python.ops.init_ops import UniformUnitScaling as uniform_unit_scaling_initializer # line: 673
from tensorflow.python.ops.init_ops import VarianceScaling as variance_scaling_initializer # line: 741
from tensorflow.python.ops.init_ops import Zeros as zeros_initializer # line: 97
from tensorflow.python.ops.io_ops import FixedLengthRecordReader # line: 495
from tensorflow.python.ops.io_ops import IdentityReader # line: 605
from tensorflow.python.ops.io_ops import LMDBReader # line: 575
from tensorflow.python.ops.io_ops import ReaderBase # line: 217
from tensorflow.python.ops.io_ops import TFRecordReader # line: 541
from tensorflow.python.ops.io_ops import TextLineReader # line: 462
from tensorflow.python.ops.io_ops import WholeFileReader # line: 431
from tensorflow.python.ops.io_ops import read_file # line: 97
from tensorflow.python.ops.io_ops import serialize_tensor # line: 137
from tensorflow.python.ops.linalg_ops import cholesky_solve # line: 147
from tensorflow.python.ops.linalg_ops import eye # line: 196
from tensorflow.python.ops.linalg_ops import matrix_solve_ls # line: 244
from tensorflow.python.ops.linalg_ops import matrix_triangular_solve # line: 84
from tensorflow.python.ops.linalg_ops import norm # line: 633
from tensorflow.python.ops.linalg_ops import self_adjoint_eig # line: 441
from tensorflow.python.ops.linalg_ops import self_adjoint_eigvals # line: 465
from tensorflow.python.ops.linalg_ops import svd # line: 489
from tensorflow.python.ops.logging_ops import Print # line: 75
from tensorflow.python.ops.logging_ops import print_v2 as print # line: 147
from tensorflow.python.ops.lookup_ops import initialize_all_tables # line: 50
from tensorflow.python.ops.lookup_ops import tables_initializer # line: 65
from tensorflow.python.ops.manip_ops import roll # line: 27
from tensorflow.python.ops.map_fn import map_fn # line: 41
from tensorflow.python.ops.math_ops import abs # line: 365
from tensorflow.python.ops.math_ops import accumulate_n # line: 4161
from tensorflow.python.ops.math_ops import acos # line: 5747
from tensorflow.python.ops.math_ops import add # line: 4020
from tensorflow.python.ops.math_ops import add_n # line: 4101
from tensorflow.python.ops.math_ops import angle # line: 869
from tensorflow.python.ops.math_ops import arg_max # line: 232
from tensorflow.python.ops.math_ops import arg_min # line: 233
from tensorflow.python.ops.math_ops import argmax # line: 251
from tensorflow.python.ops.math_ops import argmin # line: 305
from tensorflow.python.ops.math_ops import cast # line: 944
from tensorflow.python.ops.math_ops import ceil # line: 5577
from tensorflow.python.ops.math_ops import complex # line: 699
from tensorflow.python.ops.math_ops import conj # line: 4534
from tensorflow.python.ops.math_ops import count_nonzero # line: 2492
from tensorflow.python.ops.math_ops import cumprod # line: 4424
from tensorflow.python.ops.math_ops import cumsum # line: 4352
from tensorflow.python.ops.math_ops import div # line: 1664
from tensorflow.python.ops.math_ops import div_no_nan # line: 1696
from tensorflow.python.ops.math_ops import divide # line: 446
from tensorflow.python.ops.math_ops import equal # line: 2003
from tensorflow.python.ops.math_ops import exp # line: 5644
from tensorflow.python.ops.math_ops import floor # line: 5778
from tensorflow.python.ops.math_ops import floordiv # line: 1804
from tensorflow.python.ops.math_ops import imag # line: 835
from tensorflow.python.ops.math_ops import linspace_nd as lin_space # line: 112
from tensorflow.python.ops.math_ops import linspace_nd as linspace # line: 112
from tensorflow.python.ops.math_ops import log_sigmoid # line: 4307
from tensorflow.python.ops.math_ops import logical_xor # line: 1904
from tensorflow.python.ops.math_ops import matmul # line: 3617
from tensorflow.python.ops.math_ops import multiply # line: 481
from tensorflow.python.ops.math_ops import not_equal # line: 2040
from tensorflow.python.ops.math_ops import pow # line: 669
from tensorflow.python.ops.math_ops import range # line: 2163
from tensorflow.python.ops.math_ops import real # line: 794
from tensorflow.python.ops.math_ops import reduce_all_v1 as reduce_all # line: 3248
from tensorflow.python.ops.math_ops import reduce_any_v1 as reduce_any # line: 3354
from tensorflow.python.ops.math_ops import reduce_logsumexp_v1 as reduce_logsumexp # line: 3460
from tensorflow.python.ops.math_ops import reduce_max_v1 as reduce_max # line: 3123
from tensorflow.python.ops.math_ops import reduce_mean_v1 as reduce_mean # line: 2646
from tensorflow.python.ops.math_ops import reduce_min_v1 as reduce_min # line: 2995
from tensorflow.python.ops.math_ops import reduce_prod_v1 as reduce_prod # line: 2936
from tensorflow.python.ops.math_ops import reduce_sum_v1 as reduce_sum # line: 2289
from tensorflow.python.ops.math_ops import round # line: 914
from tensorflow.python.ops.math_ops import rsqrt # line: 5722
from tensorflow.python.ops.math_ops import saturate_cast # line: 1028
from tensorflow.python.ops.math_ops import scalar_mul # line: 592
from tensorflow.python.ops.math_ops import sigmoid # line: 4254
from tensorflow.python.ops.math_ops import sign # line: 747
from tensorflow.python.ops.math_ops import sparse_matmul # line: 3957
from tensorflow.python.ops.math_ops import sparse_segment_mean # line: 4942
from tensorflow.python.ops.math_ops import sparse_segment_sqrt_n # line: 5054
from tensorflow.python.ops.math_ops import sparse_segment_sum # line: 4770
from tensorflow.python.ops.math_ops import sqrt # line: 5605
from tensorflow.python.ops.math_ops import subtract # line: 545
from tensorflow.python.ops.math_ops import tensordot # line: 5152
from tensorflow.python.ops.math_ops import to_bfloat16 # line: 1271
from tensorflow.python.ops.math_ops import to_complex128 # line: 1351
from tensorflow.python.ops.math_ops import to_complex64 # line: 1311
from tensorflow.python.ops.math_ops import to_double # line: 1151
from tensorflow.python.ops.math_ops import to_float # line: 1111
from tensorflow.python.ops.math_ops import to_int32 # line: 1191
from tensorflow.python.ops.math_ops import to_int64 # line: 1231
from tensorflow.python.ops.math_ops import trace # line: 3573
from tensorflow.python.ops.math_ops import truediv # line: 1630
from tensorflow.python.ops.math_ops import unsorted_segment_mean # line: 4657
from tensorflow.python.ops.math_ops import unsorted_segment_sqrt_n # line: 4712
from tensorflow.python.ops.numerics import add_check_numerics_ops # line: 81
from tensorflow.python.ops.numerics import verify_tensor_all_finite # line: 28
from tensorflow.python.ops.parallel_for.control_flow_ops import vectorized_map # line: 452
from tensorflow.python.ops.parsing_config import FixedLenFeature # line: 298
from tensorflow.python.ops.parsing_config import FixedLenSequenceFeature # line: 318
from tensorflow.python.ops.parsing_config import SparseFeature # line: 223
from tensorflow.python.ops.parsing_config import VarLenFeature # line: 44
from tensorflow.python.ops.parsing_ops import decode_csv # line: 1023
from tensorflow.python.ops.parsing_ops import decode_json_example # line: 1152
from tensorflow.python.ops.parsing_ops import decode_raw_v1 as decode_raw # line: 978
from tensorflow.python.ops.parsing_ops import parse_example # line: 315
from tensorflow.python.ops.parsing_ops import parse_single_example # line: 375
from tensorflow.python.ops.parsing_ops import parse_single_sequence_example # line: 696
from tensorflow.python.ops.partitioned_variables import create_partitioned_variables # line: 275
from tensorflow.python.ops.partitioned_variables import fixed_size_partitioner # line: 220
from tensorflow.python.ops.partitioned_variables import min_max_variable_partitioner # line: 155
from tensorflow.python.ops.partitioned_variables import variable_axis_size_partitioner # line: 67
from tensorflow.python.ops.ragged.ragged_string_ops import string_split # line: 528
from tensorflow.python.ops.ragged.ragged_tensor import RaggedTensor # line: 65
from tensorflow.python.ops.ragged.ragged_tensor import RaggedTensorSpec # line: 2319
from tensorflow.python.ops.random_crop_ops import random_crop # line: 30
from tensorflow.python.ops.random_ops import multinomial # line: 362
from tensorflow.python.ops.random_ops import random_gamma # line: 451
from tensorflow.python.ops.random_ops import random_normal # line: 39
from tensorflow.python.ops.random_ops import random_poisson # line: 545
from tensorflow.python.ops.random_ops import random_shuffle # line: 326
from tensorflow.python.ops.random_ops import random_uniform # line: 211
from tensorflow.python.ops.random_ops import truncated_normal # line: 155
from tensorflow.python.ops.script_ops import numpy_function # line: 804
from tensorflow.python.ops.script_ops import py_func # line: 795
from tensorflow.python.ops.script_ops import eager_py_func as py_function # line: 461
from tensorflow.python.ops.session_ops import delete_session_tensor # line: 219
from tensorflow.python.ops.session_ops import get_session_handle # line: 135
from tensorflow.python.ops.session_ops import get_session_tensor # line: 178
from tensorflow.python.ops.sort_ops import argsort # line: 86
from tensorflow.python.ops.sort_ops import sort # line: 29
from tensorflow.python.ops.sparse_ops import deserialize_many_sparse # line: 2356
from tensorflow.python.ops.sparse_ops import serialize_many_sparse # line: 2224
from tensorflow.python.ops.sparse_ops import serialize_sparse # line: 2176
from tensorflow.python.ops.sparse_ops import sparse_add # line: 460
from tensorflow.python.ops.sparse_ops import sparse_concat # line: 284
from tensorflow.python.ops.sparse_ops import sparse_fill_empty_rows # line: 2109
from tensorflow.python.ops.sparse_ops import sparse_maximum # line: 2734
from tensorflow.python.ops.sparse_ops import sparse_merge # line: 1802
from tensorflow.python.ops.sparse_ops import sparse_minimum # line: 2780
from tensorflow.python.ops.sparse_ops import sparse_reduce_max # line: 1341
from tensorflow.python.ops.sparse_ops import sparse_reduce_max_sparse # line: 1427
from tensorflow.python.ops.sparse_ops import sparse_reduce_sum # line: 1559
from tensorflow.python.ops.sparse_ops import sparse_reduce_sum_sparse # line: 1628
from tensorflow.python.ops.sparse_ops import sparse_reorder # line: 821
from tensorflow.python.ops.sparse_ops import sparse_reset_shape # line: 2004
from tensorflow.python.ops.sparse_ops import sparse_reshape # line: 876
from tensorflow.python.ops.sparse_ops import sparse_retain # line: 1957
from tensorflow.python.ops.sparse_ops import sparse_slice # line: 1136
from tensorflow.python.ops.sparse_ops import sparse_softmax # line: 2671
from tensorflow.python.ops.sparse_ops import sparse_split # line: 991
from tensorflow.python.ops.sparse_ops import sparse_tensor_dense_matmul # line: 2430
from tensorflow.python.ops.sparse_ops import sparse_tensor_to_dense # line: 1681
from tensorflow.python.ops.sparse_ops import sparse_to_dense # line: 1186
from tensorflow.python.ops.sparse_ops import sparse_to_indicator # line: 1737
from tensorflow.python.ops.sparse_ops import sparse_transpose # line: 2824
from tensorflow.python.ops.special_math_ops import einsum # line: 618
from tensorflow.python.ops.special_math_ops import lbeta # line: 45
from tensorflow.python.ops.state_ops import assign # line: 277
from tensorflow.python.ops.state_ops import assign_add # line: 205
from tensorflow.python.ops.state_ops import assign_sub # line: 133
from tensorflow.python.ops.state_ops import batch_scatter_update # line: 946
from tensorflow.python.ops.state_ops import count_up_to # line: 359
from tensorflow.python.ops.state_ops import scatter_add # line: 499
from tensorflow.python.ops.state_ops import scatter_div # line: 784
from tensorflow.python.ops.state_ops import scatter_max # line: 836
from tensorflow.python.ops.state_ops import scatter_min # line: 891
from tensorflow.python.ops.state_ops import scatter_mul # line: 732
from tensorflow.python.ops.state_ops import scatter_nd_add # line: 551
from tensorflow.python.ops.state_ops import scatter_nd_sub # line: 668
from tensorflow.python.ops.state_ops import scatter_nd_update # line: 437
from tensorflow.python.ops.state_ops import scatter_sub # line: 614
from tensorflow.python.ops.state_ops import scatter_update # line: 383
from tensorflow.python.ops.string_ops import reduce_join # line: 305
from tensorflow.python.ops.string_ops import regex_replace # line: 74
from tensorflow.python.ops.string_ops import string_join # line: 551
from tensorflow.python.ops.string_ops import string_to_hash_bucket_v1 as string_to_hash_bucket # line: 536
from tensorflow.python.ops.string_ops import string_to_number_v1 as string_to_number # line: 491
from tensorflow.python.ops.string_ops import substr_deprecated as substr # line: 422
from tensorflow.python.ops.template import make_template # line: 33
from tensorflow.python.ops.tensor_array_ops import TensorArray # line: 971
from tensorflow.python.ops.tensor_array_ops import TensorArraySpec # line: 1363
from tensorflow.python.ops.unconnected_gradients import UnconnectedGradients # line: 22
from tensorflow.python.ops.variable_scope import AUTO_REUSE # line: 200
from tensorflow.python.ops.variable_scope import VariableScope # line: 1123
from tensorflow.python.ops.variable_scope import disable_resource_variables # line: 269
from tensorflow.python.ops.variable_scope import enable_resource_variables # line: 225
from tensorflow.python.ops.variable_scope import get_local_variable # line: 1790
from tensorflow.python.ops.variable_scope import get_variable # line: 1614
from tensorflow.python.ops.variable_scope import get_variable_scope # line: 1480
from tensorflow.python.ops.variable_scope import no_regularizer # line: 1116
from tensorflow.python.ops.variable_scope import resource_variables_enabled # line: 247
from tensorflow.python.ops.variable_scope import variable_creator_scope_v1 as variable_creator_scope # line: 2708
from tensorflow.python.ops.variable_scope import variable_op_scope # line: 2596
from tensorflow.python.ops.variable_scope import variable_scope # line: 2156
from tensorflow.python.ops.variable_v1 import VariableV1 as Variable # line: 55
from tensorflow.python.ops.variable_v1 import is_variable_initialized # line: 35
from tensorflow.python.ops.variables import VariableAggregation # line: 139
from tensorflow.python.ops.variables import VariableSynchronization # line: 61
from tensorflow.python.ops.variables import all_variables # line: 1735
from tensorflow.python.ops.variables import assert_variables_initialized # line: 1950
from tensorflow.python.ops.variables import global_variables # line: 1700
from tensorflow.python.ops.variables import global_variables_initializer # line: 1896
from tensorflow.python.ops.variables import initialize_all_variables # line: 1915
from tensorflow.python.ops.variables import initialize_local_variables # line: 1942
from tensorflow.python.ops.variables import initialize_variables # line: 1888
from tensorflow.python.ops.variables import local_variables # line: 1760
from tensorflow.python.ops.variables import local_variables_initializer # line: 1923
from tensorflow.python.ops.variables import model_variables # line: 1788
from tensorflow.python.ops.variables import moving_average_variables # line: 1835
from tensorflow.python.ops.variables import report_uninitialized_variables # line: 1993
from tensorflow.python.ops.variables import trainable_variables # line: 1805
from tensorflow.python.ops.variables import variables_initializer # line: 1857
from tensorflow.python.ops.while_loop import while_loop # line: 255
from tensorflow.python.platform.tf_logging import get_logger # line: 93
from tensorflow.python.proto_exports import AttrValue # line: 26
from tensorflow.python.proto_exports import ConfigProto # line: 27
from tensorflow.python.proto_exports import Event # line: 28
from tensorflow.python.proto_exports import GPUOptions # line: 29
from tensorflow.python.proto_exports import GraphOptions # line: 30
from tensorflow.python.proto_exports import HistogramProto # line: 31
from tensorflow.python.proto_exports import LogMessage # line: 34
from tensorflow.python.proto_exports import MetaGraphDef # line: 35
from tensorflow.python.proto_exports import NameAttrList # line: 38
from tensorflow.python.proto_exports import NodeDef # line: 41
from tensorflow.python.proto_exports import OptimizerOptions # line: 42
from tensorflow.python.proto_exports import RunMetadata # line: 45
from tensorflow.python.proto_exports import RunOptions # line: 46
from tensorflow.python.proto_exports import SessionLog # line: 47
from tensorflow.python.proto_exports import Summary # line: 50
from tensorflow.python.proto_exports import SummaryMetadata # line: 56
from tensorflow.python.proto_exports import TensorInfo # line: 62



from tensorflow.python.util import module_wrapper as _module_wrapper

if not isinstance(_sys.modules[__name__], _module_wrapper.TFModuleWrapper):
  _sys.modules[__name__] = _module_wrapper.TFModuleWrapper(
      _sys.modules[__name__], "", public_apis=None, deprecation=False,
      has_lite=False)


# Hook external TensorFlow modules.
_current_module = _sys.modules[__name__]

# Lazy-load estimator.
_estimator_module = "tensorflow_estimator.python.estimator.api._v1.estimator"
estimator = _LazyLoader("estimator", globals(), _estimator_module)
_module_dir = _module_util.get_parent_dir_for_name(_estimator_module)
if _module_dir:
  _current_module.__path__ = [_module_dir] + _current_module.__path__
setattr(_current_module, "estimator", estimator)

# Lazy load Keras v1
_tf_uses_legacy_keras = (
    _os.environ.get("TF_USE_LEGACY_KERAS", None) in ("true", "True", "1"))
setattr(_current_module, "keras", _KerasLazyLoader(globals(), mode="v1"))
if _tf_uses_legacy_keras:
  _module_dir = _module_util.get_parent_dir_for_name("tf_keras.api._v1.keras")
else:
  _module_dir = _module_util.get_parent_dir_for_name("keras.api._v1.keras")
_current_module.__path__ = [_module_dir] + _current_module.__path__


from tensorflow.python.platform import flags  # pylint: disable=g-import-not-at-top
_current_module.app.flags = flags  # pylint: disable=undefined-variable
setattr(_current_module, "flags", flags)

# Add module aliases from Keras to TF.
# Some tf endpoints actually lives under Keras.
_current_module.layers = _KerasLazyLoader(
    globals(),
    submodule="__internal__.legacy.layers",
    name="layers",
    mode="v1")
if _tf_uses_legacy_keras:
  _module_dir = _module_util.get_parent_dir_for_name(
      "tf_keras.api._v1.keras.__internal__.legacy.layers")
else:
  _module_dir = _module_util.get_parent_dir_for_name(
      "keras.api._v1.keras.__internal__.legacy.layers")
_current_module.__path__ = [_module_dir] + _current_module.__path__

_current_module.nn.rnn_cell = _KerasLazyLoader(
    globals(),
    submodule="__internal__.legacy.rnn_cell",
    name="rnn_cell",
    mode="v1")
if _tf_uses_legacy_keras:
  _module_dir = _module_util.get_parent_dir_for_name(
      "tf_keras.api._v1.keras.__internal__.legacy.rnn_cell")
else:
  _module_dir = _module_util.get_parent_dir_for_name(
      "keras.api._v1.keras.__internal__.legacy.rnn_cell")
_current_module.nn.__path__ = [_module_dir] + _current_module.nn.__path__

# Explicitly import lazy-loaded modules to support autocompletion.
# pylint: disable=g-import-not-at-top
if _typing.TYPE_CHECKING:
  from tensorflow_estimator.python.estimator.api._v1 import estimator as estimator
# pylint: enable=g-import-not-at-top
