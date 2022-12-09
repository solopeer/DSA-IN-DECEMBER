def solve(accounts):
   max_balue = 0
   ind_value = 0
   for i in range(len(accounts)):
      ind_value = sum(accounts[i])
      if ind_value > max_balue:
         max_balue = ind_value
   return max_balue

accounts = [[10,20,15],
   [30,5,20],
   [10,5,12],
   [15,12,3]]
print(solve(accounts ))