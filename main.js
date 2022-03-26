var firebaseConfig = {
    apiKey: "AIzaSyCDbe4T3GxW1PbOFWym9_k8WTb2UXJJbhs",
    authDomain: "teledomofarm.firebaseapp.com",
    databaseURL: "https://teledomofarm-default-rtdb.firebaseio.com",
    projectId: "teledomofarm",
    storageBucket: "teledomofarm.appspot.com",
    messagingSenderId: "489623675475",
    appId: "1:489623675475:web:805b7d7e9fc97dfbeddca6"
  };
  // Initialize Firebase
  firebase.initializeApp(firebaseConfig);

const app = new Vue({

    el: "#app",

    data: {
    LED1: null,
    LED2: null,
    },

    methods: {
    enviarMensaje1() {
    firebase.database().ref("/Test1")
    .set({
        LED1: parseInt(this.LED1),
    });

    },
    enviarMensaje2() {
        firebase.database().ref("/Test2")
        .set({
            LED2: parseInt(this.LED2),
        });
    
    }
    },
});