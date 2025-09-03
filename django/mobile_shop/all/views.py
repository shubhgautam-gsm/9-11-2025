from django.http import HttpResponse
def index(request):
    # return HttpResponse("Hello,World!")
    return HttpResponse(" <form> <input type='text' name='name'> </form>")