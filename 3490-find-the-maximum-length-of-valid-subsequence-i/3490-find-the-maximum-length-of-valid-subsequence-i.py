class Solution:
    def maximumLength(self, a: List[int]) -> int:
        return max(q:=sum(map(f:=lambda v:v&1,a)),len(a)-q,len([*groupby(a,f)]))