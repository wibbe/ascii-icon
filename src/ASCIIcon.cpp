
#include "ASCIIcon.hpp"

namespace asciicon {

  Image generateIcon(std::vector<const char *> const& data, uint32_t scaleFactor, uint32_t imageColor, bool antialiasing)
  {
    return generateIcon(data, scaleFactor,
                        [imageColor, antialiasing] (uint32_t index, uint32_t & color, uint32_t & flags)
                        {
                          color = imageColor;
                        });
  }

  Image generateIcon(std::vector<const char *> const& data, uint32_t scaleFactor, std::function<void (uint32_t, uint32_t &, uint32_t &)> context)
  {

  }

}