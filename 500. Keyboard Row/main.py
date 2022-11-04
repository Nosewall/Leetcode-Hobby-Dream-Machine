class Solution:
    def findWords(self, words):
        firstRow = "qwertyuiop"
        secondRow = "asdfghjkl"
        thirdRow = "zxcvbnm"
        passingWords = []
        for word in words:

            firstRowFound = True
            for letter in word:
                letter = letter.lower()
                if letter not in firstRow:
                    firstRowFound = False
                    break

            secondRowFound = True
            for letter in word:
                letter = letter.lower()
                if letter not in secondRow:
                    secondRowFound = False
                    break

            thirdRowFound = True
            for letter in word:
                letter = letter.lower()
                if letter not in thirdRow:
                    thirdRowFound = False
                    break

            if firstRowFound or secondRowFound or thirdRowFound:
                passingWords.append(word)

        return passingWords


sol = Solution()
print(sol.findWords(["word", "Dad", "Nephew"]))