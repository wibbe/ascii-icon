
#pragma once

#include <vector>
#include <cstdint>
#include <functional>

namespace asciicon {

  struct Image
  {
    int width_;
    int height_;
    std::vector<unsigned char> data_;
  };

  Image generateIcon(std::vector<const char *> const& data, uint32_t scaleFactor, uint32_t color, bool antialiasing);
  Image generateIcon(std::vector<const char *> const& data, uint32_t scaleFactor, std::function<void (uint32_t, uint32_t &, uint32_t &)> context);

}
