#include <iostream>

int main(int, char**) {
   std::int64_t depth_0 = 0;
   std::int64_t depth_1 = 0;
   std::int64_t depth_2 = 0;
   std::int64_t depth_3 = 0;
   std::size_t increases = 0;

   std::cin >> depth_0 >> depth_1 >> depth_2;
   while (std::cin >> depth_3) {
      std::int64_t const first_sliding_window_sum = depth_0 + depth_1 + depth_2;
      std::int64_t const second_sliding_window_sum = depth_1 + depth_2 + depth_3;
      if (second_sliding_window_sum > first_sliding_window_sum) {
         increases++;
      }
      depth_0 = depth_1;
      depth_1 = depth_2;
      depth_2 = depth_3;
   }
   std::cout << increases;
}
