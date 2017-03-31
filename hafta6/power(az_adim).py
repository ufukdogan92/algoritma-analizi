
# coding: utf-8

# In[18]:

def power_for_x_62(x):
    x1=x*x          #x^2
    x2=x1*x1        #x^4
    x3=x2*x2*x1     #x^10
    x4=x3*x3*x2     #x^24
    x5=x4*x4*x3*x2  #x^32
    return x5

y=power_for_x_62(2)
print(y)


# In[ ]:



