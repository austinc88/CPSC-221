      #include <iostream>

void fill_array(int array[]);
void fill_array2(int array[], int first, int increment);

      int main(void) {
        int array[10];
        fill_array(array);
        fill_array2(array, 2,4);
}


        void fill_array2(int array[10], int first, int increment){
          for (int k = 0; k < 10; ++k)
          {
            array[k] = first;
            first = first + increment;

          std::cout << array[k] << std::endl;
          }
        }

        void fill_array(int array[10]){
          for (int i = 0; i < 10; ++i)
          {
            array[i] = i + 1;

            std::cout << array[i] << std::endl;
          }
          std::cout << " " << std::endl;
        }
        
