<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="https://use.fontawesome.com/releases/v5.7.2/css/all.css" integrity="sha384-fnmOCqbTlWIlj8LyTjo7mOUStjsKC4pOpQbqyi7RrhN7udi9RwhKkMHpvLbHG9Sr" crossorigin="anonymous">
    <title>Document</title>
</head>
<style>
  html{
    font-family: Arial;
    display: inline-block;
    margin: 0px auto;
    text-align: center;
  }
  h2{
    font-size: 3.0rem;
  }
  p{
    font-size: 2.0rem;
  }
  i{
    font-size:3rem;
  }
</style>

<body>
  <div id="app">

<h2>Control de Iluminacion</h2>

    <form @submit.prevent="enviarMensaje1">

      <p>LED1:
        <i class="far fa-lightbulb" style = "color: #FFC300">
        <select v-model="LED1" style="width:100px; height:30px">
          <option value = 0>OFF</option>
          <option value = 1>ON</option>
        </select>
        <input type="submit" value="Enviar!">
        </i>
      </p>

    </form>

  <form @submit.prevent="enviarMensaje2">

    <p>LED2:
      <i class="far fa-lightbulb" style = "color: #FFC300">
        <select v-model="LED2" style="width:100px; height:30px">
          <option value = 0>OFF</option>
          <option value = 1>ON</option>
        </select>
        <input type="submit" value="Enviar!">
      </i>

</form>
    

  </div>

</body>

<script src="https://cdn.jsdelivr.net/npm/vue/dist/vue.js"></script>

<!-- The core Firebase JS SDK is always required and must be listed first 
<script src="https://www.gstatic.com/firebasejs/7.13.1/firebase-app.js"></script>-->

<script src="https://www.gstatic.com/firebasejs/7.13.1/firebase.js"></script>


<script src="./main.js"></script>

</html>