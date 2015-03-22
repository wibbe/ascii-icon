
#include "ASCIIcon.hpp"

#define STB_IMAGE_WRITE_IMPLEMENTATION
#include "stb_image_write.h"

static const std::vector<asciicon::Layer> chevronIcon = {
  {
    0x5a5a5aff,
    {
      "· · · · · · · · · · · ·",
      "· · · 1 2 · · · · · · ·",
      "· · · A # # · · · · · ·",
      "· · · · # # # · · · · ·",
      "· · · · · # # # · · · ·",
      "· · · · · · 9 # 3 · · ·",
      "· · · · · · 8 # 4 · · ·",
      "· · · · · # # # · · · ·",
      "· · · · # # # · · · · ·",
      "· · · 7 # # · · · · · ·",
      "· · · 6 5 · · · · · · ·",
      "· · · · · · · · · · · ·",
    }
  }
};

int main(int argc, char * argv[])
{
  return 0;
}