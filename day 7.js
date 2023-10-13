let p = new Promise((resolve,reject)=>{
    console.log("I am pending")
    setTimeout(()=>{
        console.log("Hi, I am inside timeout");
        console.log(new Error("I am an Error"))
    },5000)
})
    console.log(p)
