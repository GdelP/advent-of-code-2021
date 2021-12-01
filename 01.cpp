#include <iostream>

int main(int, char**) {
   std::int64_t depth_0 = 0;
   std::int64_t depth_1 = 0;
   std::size_t increases = 0;

   std::cin >> depth_0;
   while (std::cin >> depth_1) {
      if (depth_1 > depth_0) {
         increases++;
      }
      depth_0 = depth_1;
   }
   std::cout << increases;
}
