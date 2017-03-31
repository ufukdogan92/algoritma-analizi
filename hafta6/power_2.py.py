
# coding: utf-8

# In[24]:

#8 adimda bulan kod.
def power_for_x_62(x):
    x1=x*x*x     #x^3
    x2=x1*x1     #x^6
    x3=x2*x2*x1  #x^15
    x4=x3*x3*x   #x^31
    x5=x4*x4     #x^62
    return x5

y=power_for_x_62(2)
print(y)

