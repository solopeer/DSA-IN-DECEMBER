def isValid(test_str):
  if len(test_str)%2 != 0:
    return False
  par_dict = {'(':')','{':'}','[':']'}
  stack = []
  for char in test_str:
    if char in par_dict.keys():
      stack.append(char)
    else:
      if stack == []:
          return False
      open_brac = stack.pop()
      if char != par_dict[open_brac]:
        return False
  return stack == []