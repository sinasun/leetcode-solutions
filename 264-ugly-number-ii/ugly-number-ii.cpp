class Solution {
public:
    int nthUglyNumber(int n) {
        if (n == 1) {
            return 1;
        }

        long long ans = 0;

        vector<long long> two;
        vector<long long> three;
        vector<long long> five;

        two.push_back(2);
        three.push_back(3);
        five.push_back(5);

        int two_pointer = 0, three_pointer = 0, five_pointer = 0;

        while (three.size() < 400) {
            int last_two = two[two_pointer];
            int last_three = three[three_pointer];
            int last_five = five[five_pointer];

            if (last_two < last_three && last_two < last_five) {
                two_pointer++;
                two.push_back((long long)last_two * 2);
                three.push_back((long long)last_two * 3);
                five.push_back((long long)last_two * 5);
            } else if (last_three < last_two && last_three < last_five) {
                three_pointer++;
                three.push_back((long long)last_three * 3);
                five.push_back((long long)last_three * 5);
            } else {
                five_pointer++;
                five.push_back((long long)last_five * 5);
            }
        }

        cout << two.size() << " " << three.size() << " " << five.size() << endl;

       
        two_pointer = 0, three_pointer = 0, five_pointer = 0;
        for (int counter = 1; counter < n; ++counter) {
            if (two_pointer == two.size()) {
                if (three_pointer == three.size()) {
                    ans = (long long)five[five_pointer++];
                    if (ans == 0) {
                        cout << "a";
                    } 
                } else {
                    if (three[three_pointer] < five[five_pointer]) {
                        ans = (long long)three[three_pointer++];
                        if (ans == 0) {
                        cout << "b";
                    } 
                    } else {
                        ans = (long long)five[five_pointer++];
                        if (ans == 0) {
                        cout << "c";
                    } 
                    }
                }
            } else {
                if (two[two_pointer] < three[three_pointer] && two[two_pointer] < five[five_pointer]) {
                    ans = (long long)two[two_pointer++];
                    if (ans == 0) {
                        cout << "d";
                    } 
                } else if (three[three_pointer] < two[two_pointer] && three[three_pointer] < five[five_pointer]) {
                    ans = (long long)three[three_pointer++];
                    if (ans == 0) {
                        cout << "e";
                    } 
                } else {
                    ans = (long long)five[five_pointer++];
                    if (ans == 0) {
                        cout << "f";
                    } 
                }
            }
        }
        return ans;
    }
};