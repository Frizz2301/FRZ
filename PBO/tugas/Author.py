class author:
  def __init__(self,nm,em,gn):
    self.name=nm
    self.setEmail(em)
    if (gn == 'm' or gn == 'f'):
      self.gender = gn
    else:
      print("Invalid gender!  Set gender to 'u'(unknown).")
      self.gender = "Unknown"  
def getName(self):
  return self.name
def getEmail(self):
  return self.email
def setEmail(self,em):
  if "@" in em:
    self.email=em
  else:
    print("Invalid email, set email empty")
    self.email = ""  
def getGender(self):
  return self.gender
def display(self):
  print(f"Author name: (self.name), gender: (self.gender), email: (self.email)")