#include "cell_move_router/Input/Processed/Datas.hpp"
#include <tuple>
#include <utility>
namespace cell_move_router {
namespace RegionCalculator {

class RegionCalculator {
public:
  // return {BeginRowIdx, EndRowIdx, BeginColIdx, EndColIdx}
  virtual std::tuple<int, int, int, int>
  getRegion(const Input::Processed::Net *Net) = 0;
};

} // namespace RegionCalculator
} // namespace cell_move_router