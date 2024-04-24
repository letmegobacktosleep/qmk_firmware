/* Copyright 2023 RephlexZero (@RephlexZero)
SPDX-License-Identifier: GPL-2.0-or-later */
#pragma once

#include_next <mcuconf.h>

#undef STM32_ADC_USE_ADC1
#define STM32_ADC_USE_ADC1 TRUE

// #define STM32_HSE_BYPASS
#undef STM32_HSECLK
#define STM32_HSECLK 16000000U

#undef  STM32_PREDIV_VALUE
#define STM32_PREDIV_VALUE          2

#undef  STM32_PPRE2
#define STM32_PPRE2                 STM32_PPRE2_DIV1