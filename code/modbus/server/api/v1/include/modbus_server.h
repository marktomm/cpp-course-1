#include <vector>

#include <cstdint>

class S {
private:
  /// each bit of each vector element is a separate digital input register.
  /// floor('datapoint address' / 8) is 'vector index' for the required data.
  /// 'datapoint address' % 8 is the position of register value within the
  /// uint8_t elem at 'vector index'.
  std::vector<uint8_t> diFn1{9999, 0};
  std::vector<uint8_t> diFn2{9999, 0};

  /// datapoint address is vector index
  std::vector<uint16_t> aiFn3{9999, 0};
  std::vector<uint16_t> aiFn4{9999, 0};
}