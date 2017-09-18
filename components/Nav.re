open Next;

let component = ReasonReact.statelessComponent "Nav";

let make _children => {
  {
    ...component,
    render: fun _self => {
      <div>
        <Link href="/" prefetch=(Js.true_)>
          <a>
            (ReasonReact.stringToElement "index")
          </a>
        </Link>
        <Link href="/about" prefetch=(Js.true_)>
          <a>
            (ReasonReact.stringToElement "about")
          </a>
        </Link>
        <StyledJsx
          global=false
          css=("
            html {
              color: teal;
            }
          ")
        />
      </div>
    } 
  }
};
