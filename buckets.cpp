#include <iostream>
#include <unordered_set>

int main() {
  std::unordered_set Nums{1, 2, 3, 4, 5};

  std::cout << "Bucket Count: "
    << Nums.bucket_count();

  Nums.emplace(6);
  Nums.emplace(7);
  Nums.emplace(8);
  Nums.emplace(9);

  std::cout << "\nBucket Count: "
    << Nums.bucket_count();
}