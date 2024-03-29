#pragma once
#include <cassert>

#define UNUSED(x) (void)(x)

#define BIT(x) (1 << x)

#define NO_DISCARD [[nodiscard]]
#define NO_DISCARD_FUNC [[nodiscard]] inline

#define ASSERT(prompt) assert(prompt);