class Solution:
    def canBeTypedWords(self, text: str, brokenLetters: str) -> int:
        words = text.split(" ")
        total = 0
        
        for word in words:
            broken = False
            for ch in brokenLetters:
                if ch in word:
                    broken = True
                    break
            if not broken:
                total += 1
        
        return total
