var express = require('express');
var router = express.Router();
//var MongoClient = require('mongodb').MongoClient;
var userDetails=require('../details/user-details')


/* GET home page. */
router.get('/', function(req, res, next) {
  res.render('index');
});
router.post('/ok',(req,res) => {
  console.log("----submited------");
  console.log(req.body)
  userDetails.userRegister(req.body,(result)=>{
    res.render('index')
  })
 /* MongoClient.connect('mongodb://localhost:27017',(err,client)=>{
    if(err)
      console.log("connection db error")
    else
      console.log("Connected");
      client.db("hashim").collection('user').insertOne(req.body);
  })*/
  
});


router.get('/signup',(req,res,next)=>{
  res.render('register');
  console.log('get-signup');
})
router.post('/signup', (req,res)=>{
  console.log(req.body)
  console.log('post-signup');
res.render('home')
})

router.get('/signin',(req,res,next)=>{
  res.render('signin');
  console.log('get-signin');
})
router.post('/signin',(req,res)=>{
  console.log(req.body);

  res.render('home')
  console.log('post-signin');
})

module.exports = router;
