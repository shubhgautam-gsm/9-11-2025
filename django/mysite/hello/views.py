from django.http import HttpResponse
def index(request):
    return HttpResponse("""
                        <form style='font-family: Arial, sans-serif;
                        background-color: lightgray; padding: 20px; border-radius: 5px;'>
                            <label for='name'>Name:</label>
                            <input type='text' name='name' style='margin-bottom: 10px;' /><br>
                            <label for='age'>Age:</label>
                            <input type='text' name='age' />
                        </form>
                        """)
# Create your views here.

# from django.http import HttpResponse
# def index(request):
#     html_content = '<img src="/maharanapratap.jpg" alt="R.">'
#     return HttpResponse(html_content)