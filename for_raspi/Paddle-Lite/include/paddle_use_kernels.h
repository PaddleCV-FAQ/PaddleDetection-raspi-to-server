#pragma once
#include "paddle_lite_factory_helper.h"

USE_LITE_KERNEL(feed, kHost, kAny, kAny, def);
USE_LITE_KERNEL(arg_max, kARM, kFloat, kNCHW, def);
USE_LITE_KERNEL(conv2d, kARM, kFloat, kNCHW, def);
USE_LITE_KERNEL(depthwise_conv2d, kARM, kFloat, kNCHW, def);
USE_LITE_KERNEL(conv2d, kARM, kInt8, kNCHW, int8_out);
USE_LITE_KERNEL(conv2d, kARM, kInt8, kNCHW, fp32_out);
USE_LITE_KERNEL(depthwise_conv2d, kARM, kInt8, kNCHW, int8_out);
USE_LITE_KERNEL(depthwise_conv2d, kARM, kInt8, kNCHW, fp32_out);
USE_LITE_KERNEL(elementwise_add, kARM, kFloat, kNCHW, def);
USE_LITE_KERNEL(fusion_elementwise_add_activation, kARM, kFloat, kNCHW, def);
USE_LITE_KERNEL(elementwise_sub, kARM, kFloat, kNCHW, def);
USE_LITE_KERNEL(fusion_elementwise_sub_activation, kARM, kFloat, kNCHW, def);
USE_LITE_KERNEL(elementwise_mul, kARM, kFloat, kNCHW, def);
USE_LITE_KERNEL(elementwise_mul, kARM, kInt32, kNCHW, def);
USE_LITE_KERNEL(elementwise_mul, kARM, kInt64, kNCHW, def);
USE_LITE_KERNEL(fusion_elementwise_mul_activation, kARM, kFloat, kNCHW, def);
USE_LITE_KERNEL(elementwise_max, kARM, kFloat, kNCHW, def);
USE_LITE_KERNEL(fusion_elementwise_max_activation, kARM, kFloat, kNCHW, def);
USE_LITE_KERNEL(elementwise_div, kARM, kFloat, kNCHW, def);
USE_LITE_KERNEL(fusion_elementwise_div_activation, kARM, kFloat, kNCHW, def);
USE_LITE_KERNEL(range, kARM, kFloat, kNCHW, def);
USE_LITE_KERNEL(reshape, kHost, kAny, kAny, def);
USE_LITE_KERNEL(reshape2, kHost, kAny, kAny, def);
USE_LITE_KERNEL(flatten, kHost, kAny, kAny, def);
USE_LITE_KERNEL(flatten2, kHost, kAny, kAny, def);
USE_LITE_KERNEL(bilinear_interp, kARM, kFloat, kNCHW, def);
USE_LITE_KERNEL(nearest_interp, kARM, kFloat, kNCHW, def);
USE_LITE_KERNEL(pad2d, kARM, kFloat, kNCHW, def);
USE_LITE_KERNEL(fill_constant_batch_size_like, kARM, kAny, kNCHW, def);
USE_LITE_KERNEL(split, kARM, kFloat, kNCHW, def);
USE_LITE_KERNEL(conv2d_transpose, kARM, kFloat, kNCHW, def);
USE_LITE_KERNEL(concat, kARM, kFloat, kNCHW, def);
USE_LITE_KERNEL(relu, kARM, kFloat, kNCHW, def);
USE_LITE_KERNEL(leaky_relu, kARM, kFloat, kNCHW, def);
USE_LITE_KERNEL(relu_clipped, kARM, kFloat, kNCHW, def);
USE_LITE_KERNEL(prelu, kARM, kFloat, kNCHW, def);
USE_LITE_KERNEL(sigmoid, kARM, kFloat, kNCHW, def);
USE_LITE_KERNEL(tanh, kARM, kFloat, kNCHW, def);
USE_LITE_KERNEL(swish, kARM, kFloat, kNCHW, def);
USE_LITE_KERNEL(relu6, kARM, kFloat, kNCHW, def);
USE_LITE_KERNEL(log, kARM, kFloat, kNCHW, def);
USE_LITE_KERNEL(exp, kARM, kFloat, kNCHW, def);
USE_LITE_KERNEL(floor, kARM, kFloat, kNCHW, def);
USE_LITE_KERNEL(hard_sigmoid, kARM, kFloat, kNCHW, def);
USE_LITE_KERNEL(rsqrt, kARM, kFloat, kNCHW, def);
USE_LITE_KERNEL(fc, kARM, kFloat, kNCHW, def);
USE_LITE_KERNEL(fc, kARM, kInt8, kNCHW, int8out);
USE_LITE_KERNEL(fc, kARM, kInt8, kNCHW, fp32out);
USE_LITE_KERNEL(shuffle_channel, kARM, kFloat, kNCHW, def);
USE_LITE_KERNEL(transpose, kARM, kFloat, kNCHW, def);
USE_LITE_KERNEL(transpose2, kARM, kFloat, kNCHW, def);
USE_LITE_KERNEL(affine_channel, kARM, kFloat, kNCHW, def);
USE_LITE_KERNEL(layout, kARM, kFloat, kNCHW, nchw2nhwc);
USE_LITE_KERNEL(layout, kARM, kFloat, kNCHW, nhwc2nchw);
USE_LITE_KERNEL(layout, kARM, kInt8, kNCHW, int8_nchw2nhwc);
USE_LITE_KERNEL(layout, kARM, kInt8, kNCHW, int8_nhwc2nchw);
USE_LITE_KERNEL(layout_once, kARM, kFloat, kNCHW, nchw2nhwc);
USE_LITE_KERNEL(layout_once, kARM, kFloat, kNCHW, nhwc2nchw);
USE_LITE_KERNEL(layout_once, kARM, kInt8, kNCHW, int8_nchw2nhwc);
USE_LITE_KERNEL(layout_once, kARM, kInt8, kNCHW, int8_nhwc2nchw);
USE_LITE_KERNEL(grid_sampler, kARM, kFloat, kNCHW, def);
USE_LITE_KERNEL(stack, kARM, kFloat, kNCHW, def);
USE_LITE_KERNEL(softmax, kARM, kFloat, kNCHW, def);
USE_LITE_KERNEL(expand, kARM, kFloat, kNCHW, def);
USE_LITE_KERNEL(slice, kARM, kFloat, kNCHW, def);
USE_LITE_KERNEL(slice, kARM, kInt32, kNCHW, def);
USE_LITE_KERNEL(dropout, kARM, kFloat, kNCHW, def);
USE_LITE_KERNEL(reduce_mean, kARM, kFloat, kNCHW, def);
USE_LITE_KERNEL(fill_constant, kARM, kAny, kNCHW, def);
USE_LITE_KERNEL(multiclass_nms, kHost, kFloat, kNCHW, def);
USE_LITE_KERNEL(multiclass_nms2, kHost, kFloat, kNCHW, def);
USE_LITE_KERNEL(cast, kARM, kAny, kNCHW, def);
USE_LITE_KERNEL(yolo_box, kARM, kFloat, kNCHW, def);
USE_LITE_KERNEL(unsqueeze, kARM, kFloat, kNCHW, def);
USE_LITE_KERNEL(unsqueeze2, kARM, kFloat, kNCHW, def);
USE_LITE_KERNEL(prior_box, kARM, kFloat, kNCHW, def);
USE_LITE_KERNEL(density_prior_box, kARM, kFloat, kNCHW, def);
USE_LITE_KERNEL(squeeze, kARM, kFloat, kNCHW, def);
USE_LITE_KERNEL(squeeze2, kARM, kFloat, kNCHW, def);
USE_LITE_KERNEL(box_coder, kARM, kFloat, kNCHW, def);
USE_LITE_KERNEL(calib, kARM, kInt8, kNCHW, fp32_to_int8);
USE_LITE_KERNEL(calib, kARM, kInt8, kNCHW, int8_to_fp32);
USE_LITE_KERNEL(calib, kARM, kInt8, kNHWC, fp32_to_int8);
USE_LITE_KERNEL(calib, kARM, kInt8, kNHWC, int8_to_fp32);
USE_LITE_KERNEL(calib_once, kARM, kInt8, kNCHW, fp32_to_int8);
USE_LITE_KERNEL(calib_once, kARM, kInt8, kNCHW, int8_to_fp32);
USE_LITE_KERNEL(calib_once, kARM, kInt8, kNHWC, fp32_to_int8);
USE_LITE_KERNEL(calib_once, kARM, kInt8, kNHWC, int8_to_fp32);
USE_LITE_KERNEL(mul, kARM, kFloat, kNCHW, def);
USE_LITE_KERNEL(scale, kARM, kFloat, kNCHW, def);
USE_LITE_KERNEL(scale, kARM, kInt32, kNCHW, def);
USE_LITE_KERNEL(pool2d, kARM, kFloat, kNCHW, def);
USE_LITE_KERNEL(instance_norm, kARM, kFloat, kNCHW, def);
USE_LITE_KERNEL(fetch, kHost, kAny, kAny, def);
USE_LITE_KERNEL(batch_norm, kARM, kFloat, kNCHW, def);
USE_LITE_KERNEL(matmul, kARM, kFloat, kNCHW, def);