#pragma once

namespace ipsa_configuration {
constexpr int SRAM_WIDTH = 128;
constexpr int TCAM_WIDTH = 64;
constexpr int SRAM_DEPTH = 1024;
constexpr int TCAM_DEPTH = 1024;
constexpr int MAX_LEVEL = 4;
constexpr int CLUSTER_COUNT = 4;
constexpr int CLUSTER_PROC_COUNT = 4;
constexpr int CLUSTER_SRAM_COUNT[] = {512, 256, 128, 128};
constexpr int CLUSTER_TCAM_COUNT[] = {256, 128, 64, 64};
constexpr int PROC_COUNT = CLUSTER_PROC_COUNT * CLUSTER_COUNT;

static_assert(sizeof(CLUSTER_SRAM_COUNT) / sizeof(int) == CLUSTER_COUNT,
              "Wrong SRAM configuration");
static_assert(sizeof(CLUSTER_TCAM_COUNT) / sizeof(int) == CLUSTER_COUNT,
              "Wrong TCAM configuration");

} // namespace ipsa_configuration