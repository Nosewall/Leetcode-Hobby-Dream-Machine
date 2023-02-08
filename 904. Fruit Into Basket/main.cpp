class Solution {
public:

    int firstBasket = -1;
    int secondBasket = -1;
    int currentStretch = 0;
    int longestStretch = 0;
    int concurrentFirst = 0;
    int concurrentSecond = 0;

    int totalFruit(vector<int>& fruits) {

        for(int i = 0; i < fruits.size(); i++){
            //See if baskets are filled at all.
            if(firstBasket == -1){
                firstBasket = fruits[i];
                currentStretch += 1;
                checkLongestStretch();
                concurrentFirst = 1;
                continue;
            }
            else if(secondBasket == -1 && fruits[i] != firstBasket){
                secondBasket = fruits[i];
                currentStretch += 1;
                checkLongestStretch();
                concurrentFirst = 0;
                concurrentSecond = 1;
                continue;
            }

            //Check if fruit is in first basket
            if(firstBasket == fruits[i]){
                concurrentSecond = 0;
                currentStretch += 1;
                checkLongestStretch();
                if(fruits[i - 1] == firstBasket){
                    concurrentFirst += 1;
                } else{
                    concurrentFirst = 1;
                }
                continue;
            }
            //Second basket
            if(secondBasket == fruits[i]){
                concurrentFirst = 0;
                currentStretch +=1;
                checkLongestStretch();
                if(fruits[i-1] == secondBasket){
                    concurrentSecond += 1;
                } else{
                    concurrentSecond = 1;
                }
                continue;
            }

            //Otherwise, these are completely new fruits. 
            //Get longest concurrent,   replace other basket, 
            //set new longest stretch to longest concurrent.

            if(concurrentFirst > concurrentSecond){
                currentStretch = concurrentFirst;
                secondBasket = fruits[i];
                concurrentSecond = 1;
                concurrentFirst = 0;
                currentStretch += 1;
                checkLongestStretch();
            } else{
                currentStretch = concurrentSecond;
                firstBasket = fruits[i];
                concurrentFirst = 1;
                concurrentSecond = 0;
                currentStretch += 1;
                checkLongestStretch();
            }



        }
        return longestStretch;

    }
    void checkLongestStretch(){
        if(currentStretch > longestStretch){
            longestStretch = currentStretch;
        }
    }
};