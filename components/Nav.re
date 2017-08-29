open Next;

let component = ReasonReact.statelessComponent "Nav";

let make _children => {
  {
    ...component,
    render: fun _self => {
      <div>
         <Link href="/" prefetch=(Js.Boolean.to_js_boolean true)> 
          <a>
            (ReasonReact.stringToElement "index")
          </a>
        </Link>
         <Link href="/about" prefetch=(Js.Boolean.to_js_boolean true)> 
          <a>
            (ReasonReact.stringToElement "about")
          </a>
        </Link>
      </div>
    } 
  }
};
